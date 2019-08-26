// AOJ: ITP1_2_B
#include <iostream>
#include <string>
#include <cstdio>
int main()
{
    std::string buff = "";
    std::getline( std::cin, buff );
    int a = 0;
    int b = 0;
    int c = 0;
    sscanf( buff.c_str(), "%d %d %d", &a, &b, &c );

    if ( ( a < b ) && ( b < c ) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
