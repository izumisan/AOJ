// AOJ: ITP2_4_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_4_D&lang=jp
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

    auto&& newend = std::unique( a.begin(), a.end() );
    a.erase( newend, a.end() );

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
