// AOJ: ITP2_3_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_3_A&lang=jp
#include <iostream>
#include <algorithm>

int main()
{
    int a, b, c = 0;
    std::cin >> a >> b >> c;
    auto&& minmax = std::minmax( { a, b, c } );
    std::cout << minmax.first << " " << minmax.second << std::endl;
    return 0;
}
