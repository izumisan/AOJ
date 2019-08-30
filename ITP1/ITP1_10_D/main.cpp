// AOJ: ITP1_10_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_D&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

double distance( const std::vector<int>& x, const std::vector<int>& y, const int p )
{
    double ret = 0.0;
    for ( int i = 0; i < x.size(); ++i )
    {
        ret += std::pow( std::abs( x.at( i ) - y.at( i ) ), p );
    }
    ret = std::pow( ret, 1.0 / p );
    return ret;
}

double distance( const std::vector<int>& x, const std::vector<int>& y )
{
    std::vector<int> diff {};
    for ( int i = 0; i < x.size(); ++i )
    {
        diff.emplace_back( std::abs( x.at( i ) - y.at( i ) ) );
    }
    return *( std::max_element( diff.cbegin(), diff.cend() ) );
}

int main()
{
    auto&& split = [](const std::string& str)
    {
        std::vector<int> ret {};
        std::istringstream iss { str };
        std::string buff {};
        while ( std::getline( iss, buff, ' ' ) )
        {
            ret.emplace_back( std::stoi( buff ) );
        }
        return ret;
    };

    std::string buff {};
    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    std::getline( std::cin, buff );
    std::vector<int> x = split( buff );

    std::getline( std::cin, buff );
    std::vector<int> y = split( buff );

    double d1 = distance( x, y, 1 );
    double d2 = distance( x, y, 2 );
    double d3 = distance( x, y, 3 );
    double dinf = distance( x, y );

    printf( "%.6f\n", d1 );
    printf( "%.6f\n", d2 );
    printf( "%.6f\n", d3 );
    printf( "%.6f\n", dinf );

    return 0;
}
