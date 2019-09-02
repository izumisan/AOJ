// AOJ: ITP2_2_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_C&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>

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

    auto&& values = split( buff );
    int n = values.at( 0 );
    int q = values.at( 1 ) ;

    std::vector<std::multiset<int>> Q( n, std::multiset<int>{} );
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        // insert( t, x )
        case 0:
        {
            int t = command.at( 1 );
            int x = command.at( 2 );
            Q.at( t ).insert( x );
            break;
        }
        // getMax( t )
        case 1:
        {
            int t = command.at( 1 );
            if ( !Q.at( t ).empty() )
            {
                std::cout << *( Q.at( t ).rbegin() ) << std::endl;
            }
            break;
        }
        // deleteMax( t )
        case 2:
        {
            int t = command.at( 1 );
            if ( !Q.at( t ).empty() )
            {
                auto&& it = Q.at(t).cend();
                --it;
                Q.at( t ).erase( it );
            }
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
