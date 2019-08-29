// AOJ: ITP1_9_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_A&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    auto&& tolowerAction = [](const std::string& str)
    {
        std::string ret { str };
        std::transform( str.cbegin(), str.cend(), ret.begin(), ::tolower );
        return ret;
    };

    std::string buff {};
    std::getline( std::cin, buff );

    std::string w = tolowerAction( buff );

    std::vector<std::string> words {};
    while ( std::getline( std::cin, buff ) )
    {
        if ( buff == "END_OF_TEXT" )
        {
            break;
        }

        std::istringstream iss { buff };
        while ( std::getline( iss, buff, ' ' ) )
        {
            words.emplace_back( tolowerAction( buff ) );
        }
    }

    int answer = std::count( words.cbegin(), words.cend(), w );
    std::cout << answer << std::endl;

    return 0;
}
