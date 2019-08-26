// AOJ: ITP1_4_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A&lang=jp
#include <iostream>
#include <string>

int main()
{
    std::string buff {};
    std::getline( std::cin, buff );
    int a, b = 0;
    sscanf( buff.c_str(), "%d %d", &a, &b );

    int d = a / b;
    int r = a % b;
    double f = static_cast<double>( a ) / static_cast<double>( b );
    //std::cout << d << " " << r << " " << f << std::endl;
    printf( "%d %d %.6f\n", d, r, f );

    return 0;
}
