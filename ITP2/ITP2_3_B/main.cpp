// AOJ: ITP2_3_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_3_B&lang=jp
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
        int com = query.at( 0 );
        int b = query.at( 1 );
        int e = query.at( 2 );
        int answer = 0;
        switch ( com )
        {
        case 0:
            answer = *( std::min_element( a.cbegin() + b, a.cbegin() + e ) );
            std::cout << answer << std::endl;
            break;
        case 1:
            answer = *( std::max_element( a.cbegin() + b, a.cbegin() + e ) );
            std::cout << answer << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}
