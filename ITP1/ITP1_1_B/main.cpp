// AOJ: ITP1_1_B
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::string buff = "";
    if ( std::getline( std::cin, buff ) )
    {
        auto&& value = std::stoi( buff );
        auto&& answer = std::pow( value, 3 );
        std::cout << static_cast<int>( answer ) << std::endl;
    }
    return 0;
}
