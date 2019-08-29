// AOJ: ITP1_8_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_A&lang=jp
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main()
{
    std::string input {};
    std::getline( std::cin, input );

    std::string answer( input.size(), ' ' );
    std::transform( input.begin(), input.end(), answer.begin(), [](auto&& x)
    {
        return ::islower( x ) ? ::toupper( x ) : ::tolower( x );
    } );

    std::cout << answer << std::endl;

    return 0;
}
