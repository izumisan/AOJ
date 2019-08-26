// AOJ: ITP1_1_C
#include <iostream>
int main()
{
    int a, b = 0;
    std::cin >> a >> b;
    int area = a * b;
    int length = 2 * ( a + b );
    std::cout << area << " " << length << std::endl;
    return 0;
}
