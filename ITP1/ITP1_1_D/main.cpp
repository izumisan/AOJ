// AOJ: ITP1_1_D
#include <iostream>
int main()
{
    int input = 0;
    std::cin >> input;
    int hour = input / 3600;
    int minute = ( input % 3600 ) / 60;
    int second = input % 60;
    std::cout << hour << ":" << minute << ":" << second << std::endl;
    return 0;
}
