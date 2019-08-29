// AOJ: ITP1_8_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_C&lang=jp
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string buff {};
    std::string input {};
    while ( std::getline( std::cin, buff ) )
    {
        if ( buff.empty() )
        {
            break;
        }
        input += buff;
    }

    std::string lowerText( input.size(), ' ' );
    std::transform( input.cbegin(), input.cend(), lowerText.begin(), ::tolower );

    for ( char c = 'a'; c <= 'z'; ++c )
    {
        std::cout << c << " : " << std::count( lowerText.cbegin(), lowerText.cend(), c ) << std::endl;
    }
    return 0;
}
