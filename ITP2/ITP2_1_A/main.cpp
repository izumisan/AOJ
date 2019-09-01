// AOJ: ITP2_1_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_A&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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
    std::vector<int> a {};
    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        auto&& operation = split( buff );
        switch ( operation.at(0) )
        {
        case 0:
            a.emplace_back( operation.at( 1 ) );
            break;
        case 1:
            std::cout << a.at( operation.at( 1 ) ) << std::endl;
            break;
        case 2:
            a.erase( a.cend() - 1 );
            break;
        default:
            break;
        }
    }
    return 0;
}
