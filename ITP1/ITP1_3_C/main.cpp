// AOJ: ITP1_3_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C&lang=jp
#include <iostream>
#include <string>
#include <set>
int main()
{
    std::string buff = "";
    while ( std::getline( std::cin, buff ) )
    {
        if ( buff == "0 0" )
        {
            break;
        }
        int x1, x2 = 0;
        sscanf( buff.c_str(), "%d %d", &x1, &x2 );
        if ( x1 <= x2 )
        {
            std::cout << x1 << " " << x2 << std::endl;
        }
        else
        {
            std::cout << x2 << " " << x1 << std::endl;
        }
    }
    return 0;
}
