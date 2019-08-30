// AOJ: ITP1_10_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_A&lang=jp
#include <iostream>
#include <cmath>

int main()
{
    double x1, y1, x2, y2 = 0.0;
    std::cin >> x1 >> y1 >> x2 >> y2;
    double answer = std::sqrt( std::pow( x2 - x1, 2.0 ) + std::pow( y2 - y1, 2.0 ) );
    printf( "%.8f\n", answer );
    return 0;
}
