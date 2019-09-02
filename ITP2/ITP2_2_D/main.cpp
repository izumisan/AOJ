// AOJ: ITP2_2_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_D&lang=jp
#include <iostream>
#include <sstream>
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

    auto&& values = split( buff );
    int n = values.at( 0 );
    int q = values.at( 1 ) ;

    std::vector<std::list<int>> lists( n, std::list<int>{} );
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& query = split( buff );
        switch ( query.at( 0 ) )
        {
        // insert( t, x )
        case 0:
        {
            int t = query.at( 1 );
            int x = query.at( 2 );
            lists.at( t ).push_back( x );
            break;
        }
        // dump( t )
        case 1:
        {
            int t = query.at( 1 );
            auto&& list = lists.at( t );
            for ( auto&& it = list.cbegin(); it != list.cend(); ++it )
            {
                if ( it == list.cbegin() )
                {
                    std::cout << *it;
                }
                else
                {
                    std::cout << " " << *it;
                }
            }
            std::cout << std::endl;
            break;
        }
        // splice( s, t )
        case 2:
        {
            auto&& from = lists.at( query.at( 1 ) );
            auto&& to = lists.at( query.at( 2 ) );
            to.splice( to.cend(), std::move( from ) );
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
