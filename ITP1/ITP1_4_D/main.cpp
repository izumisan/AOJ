// AOJ: ITP1_4_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D&lang=jp
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::string buff {};
    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    std::getline( std::cin, buff );
    std::istringstream iss { buff };
    std::vector<int> values {};
    for ( int i = 0; i < n; ++i )
    {
        std::getline( iss, buff, ' ' );
        values.emplace_back( std::stoi( buff ) );
    }

    auto&& minmax = std::minmax_element( values.cbegin(), values.cend() );
    int min = *( minmax.first );
    int max = *( minmax.second );

    long long sum = 0;
    std::for_each( values.cbegin(), values.cend(), [&sum](int x){ sum += x; } );

    std::cout << min << " " << max << " " << sum << std::endl;
    return 0;
}
