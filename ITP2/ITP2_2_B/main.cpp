// AOJ: ITP2_2_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_B&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>

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

    std::vector<std::queue<int>> queue( n, std::queue<int>{} );
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        // enqueue( t, x )
        case 0:
        {
            int t = command.at( 1 );
            int x = command.at( 2 );
            queue.at( t ).push( x );
            break;
        }
        // front( t )
        case 1:
        {
            int t = command.at( 1 );
            if ( !queue.at( t ).empty() )
            {
                std::cout << queue.at( t ).front() << std::endl;
            }
            break;
        }
        // dequeue( t )
        case 2:
        {
            int t = command.at( 1 );
            if ( !queue.at( t ).empty() )
            {
                queue.at( t ).pop();
            }
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
