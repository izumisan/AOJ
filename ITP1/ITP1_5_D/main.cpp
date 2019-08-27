// AOJ: ITP1_5_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_D&lang=jp#
#include <iostream>
#include <string>
int main()
{
    int n = 0;
    std::cin >> n;
    for ( int i = 3; i <= n; ++i )
    {
        if ( i % 3 == 0 )
        {
            std::cout << " " << i;
            continue;
        }
        else if ( std::to_string( i ).find( "3" ) != std::string::npos )
        {
            std::cout << " " << i;
            continue;
        }
        else
        {
            // Nothing.
        }
    }
    std::cout << std::endl;
    return 0;
}
