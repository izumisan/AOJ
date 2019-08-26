// AOJ: ITP1_2_C
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::string buff("");
    std::getline( std::cin, buff );
    int x[3] = {};
    sscanf( buff.c_str(), "%d %d %d", &x[0], &x[1], &x[2] );

    auto&& nums = std::vector<int> { x[0], x[1], x[2] };
    std::sort( nums.begin(), nums.end() );
    std::cout << nums.at( 0 ) << " " << nums.at( 1 ) << " " << nums.at( 2 ) << std::endl;
    return 0;
}
