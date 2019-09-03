// AOJ: ITP2_3_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_3_C&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    auto&& split = [](auto&& str)
    {
        std::vector<int> ret {};
        std::string buff {};
        std::istringstream iss { str };
        while ( std::getline( iss, buff, ' ' ) )
        {
            ret.emplace_back( std::stoi( buff ) );
        }
        return  ret;
    };

    std::string buff {};
    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    std::getline( std::cin, buff );
    auto&& a = split( buff );

    std::getline( std::cin, buff );
    int q = std::stoi( buff );

    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& query = split( buff );
        int b = query.at( 0 );
        int e = query.at( 1 );
        int k = query.at( 2 );
        std::cout << std::count( a.cbegin() + b, a.cbegin() + e, k ) << std::endl;
    }
    return 0;
}
