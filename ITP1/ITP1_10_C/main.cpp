// AOJ: ITP1_10_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_C&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

double solve( const std::vector<int>& values )
{
    double average = static_cast<double>( std::accumulate( values.cbegin(), values.cend(), 0LL ) ) / values.size();
    double s2 = std::accumulate( values.cbegin(), values.cend(), 0.0, [&average](auto&& sum, auto&& value)
    {
        sum += std::pow( static_cast<double>( value ) - average, 2.0 );
        return sum;
    } ) / values.size();
    double ret = std::sqrt( s2 );
    return ret;
}

int main()
{
    while ( true )
    {
        std::string buff {};
        std::getline( std::cin, buff );

        if ( buff == "0" )
        {
            break;
        }

        int n = std::stoi( buff );

        std::getline( std::cin, buff );
        std::istringstream iss { buff };
        std::vector<int> scorelist {};
        for ( int i = 0; i < n; ++i )
        {
            std::getline( iss, buff, ' ' );
            scorelist.emplace_back( std::stoi( buff ) );
        }

        double answer = solve( scorelist );
        printf( "%.8f\n", answer );
    }
    return 0;
}
