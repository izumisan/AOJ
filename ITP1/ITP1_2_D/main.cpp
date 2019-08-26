// AOJ: ITP1_2_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_D&lang=jp
#include <iostream>
#include <string>

int main()
{
    std::string buff = "";
    std::getline( std::cin, buff );
    int w, h, x, y, r = 0;
    sscanf( buff.c_str(), "%d %d %d %d %d", &w, &h, &x, &y, &r );

    if ( ( r <= x ) && ( x <= w - r ) && ( r <= y ) && ( y <= h - r ) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
