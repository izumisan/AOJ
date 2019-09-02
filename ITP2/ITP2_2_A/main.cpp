// AOJ: ITP2_2_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_A&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>

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

    std::vector<std::stack<int>> s( n, std::stack<int>{} );
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        // push( t, x )
        case 0:
        {
            int t = command.at( 1 );
            int x = command.at( 2 );
            s.at( t ).push( x );
            break;
        }
        // top( t )
        case 1:
        {
            int t = command.at( 1 );
            if ( !s.at( t ).empty() )
            {
                std::cout << s.at( t ).top() << std::endl;
            }
            break;
        }
        // pop( t )
        case 2:
        {
            int t = command.at( 1 );
            if ( !s.at( t ).empty() )
            {
                s.at( t ).pop();
            }
            break;
        }
        default:
            break;
        }
    }
    return 0;
}
