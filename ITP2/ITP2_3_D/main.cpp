// AOJ: ITP2_3_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_3_D&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    auto&& split = [](auto&& str)
    {
        std::vector<int> ret {};
        std::string buff {};
        std::istringstream iss { str };
        while ( std::getline( iss, buff, ' ' ) )
        {
            ret.emplace_back( std::stoi( buff ) );
        }
        return  ret;
    };

    std::string buff {};
    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    std::getline( std::cin, buff );
    auto&& a = split( buff );

    std::getline( std::cin, buff );
    int m = std::stoi( buff );

    std::getline( std::cin, buff );
    auto&& b = split( buff );

    std::cout << std::lexicographical_compare( a.cbegin(), a.cend(), b.cbegin(), b.cend() ) << std::endl;

    return 0;
}
