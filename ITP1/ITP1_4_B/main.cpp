// AOJ: ITP1_4_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_B&lang=jp
#include <iostream>
#include <string>
#include <cmath>
int main()
{
    double r = 0.0;
    std::cin >> r;
    const double pi = acos( -1.0 );
    double area = r * r * pi;
    double circle = 2.0 * pi * r;
    printf( "%.6f %.6f\n", area, circle );
    return 0;
}
