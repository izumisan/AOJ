// AOJ: ITP2_1_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_B&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>

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
    const int q = std::stoi( buff );
    std::deque<int> a {};
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        case 0:
            if ( command.at( 1 ) == 0 )
            {
                a.emplace_front( command.at( 2 ) );
            }
            else
            {
                a.emplace_back( command.at( 2 ) );
            }
            break;
        case 1:
            std::cout << a.at( command.at( 1 ) ) << std::endl;
            break;
        case 2:
            if ( command.at( 1 ) == 0 )
            {
                a.pop_front();
            }
            else
            {
                a.pop_back();
            }
            break;
        default:
            break;
        }
    }
    return 0;
}
