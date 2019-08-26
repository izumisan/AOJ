// AOJ: ITP1_2_A
#include <iostream>
#include <string>
#include <cstdio>

int main()
{
    std::string buff = "";
    std::getline( std::cin, buff );
    int a = 0;
    int b = 0;
    sscanf( buff.c_str(), "%d %d", &a, &b );

    if ( a < b )
    {
        std::cout << "a < b" << std::endl;
    }
    else if ( a == b )
    {
        std::cout << "a == b" << std::endl;
    }
    else
    {
        std::cout << "a > b" << std::endl;
    }
    return 0;
}
