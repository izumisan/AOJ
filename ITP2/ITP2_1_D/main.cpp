// AOJ: ITP2_1_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D&lang=jp
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>

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
    auto&& line = split( buff );
    int n = line.at( 0 );
    int q = line.at( 1 );
    std::vector<std::list<int>> a( n, std::list<int>{} );
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        case 0:
        {
            int t = command.at( 1 );
            int x = command.at( 2 );
            a[t].push_back( x );
        }
            break;
        case 1:
        {
            auto&& v = a.at( command.at( 1 ) );
            for ( auto&& it = v.cbegin(); it != v.cend(); ++it )
            {
                if ( it == v.cbegin() )
                {
                    std::cout << *it;
                }
                else
                {
                    std::cout << " " << *it;
                }
            }
            std::cout << std::endl;
        }
            break;
        case 2:
        {
            auto&& v = a.at( command.at( 1 ) );
            v.clear();
        }
            break;
        default:
            break;
        }
    }
    return 0;
}
