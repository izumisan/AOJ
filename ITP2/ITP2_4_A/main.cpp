// AOJ: ITP2_4_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_4_A&lang=jp
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

        std::reverse( a.begin() + b, a.begin() + e );
    }

    for ( auto&& it = a.cbegin(); it != a.cend(); ++it )
    {
        if ( it != a.cbegin() )
        {
            std::cout << " " << *it;
        }
        else
        {
            std::cout << *it;
        }
    }
    std::cout << std::endl;

    return 0;
}
