// AOJ: ITP2_1_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_C&lang=jp
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
    int q = std::stoi( buff );
    std::list<int> l {};
    std::list<int>::iterator it = l.begin();
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& command = split( buff );
        switch ( command.at( 0 ) )
        {
        case 0:
            it = l.insert( it, command.at( 1 ) );
            break;
        case 1:
            if ( 0 < command.at( 1 ) )
            {
                for ( int j = 0; j < command.at( 1 ); ++j )
                {
                    ++it;
                }
            }
            else
            {
                for ( int j = 0; j < std::abs( command.at( 1 ) ); ++j )
                {
                    --it;
                }
            }
            break;
        case 2:
            it = l.erase( it );
            break;
        default:
            break;
        }
    }

    for ( auto&& it = l.cbegin(); it != l.cend(); ++it )
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
