// AOJ: ITP1_10_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_B&lang=jp
#include <iostream>
#include <cmath>

int main()
{
    double a, b, c = 0.0;
    std::cin >> a >> b >> c;

    const double pi = std::acos( -1.0 );
    double s = 0.5 * a * b * std::sin( c * pi / 180.0 );
    double l = a + b + std::sqrt( a * a + b * b - 2.0 * a * b * std::cos( c * pi / 180.0 ) );
    double h = s * 2.0 / a;
    printf( "%.8f\n", s );
    printf( "%.8f\n", l );
    printf( "%.8f\n", h );
    return 0;
}
