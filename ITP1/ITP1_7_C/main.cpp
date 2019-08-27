// AOJ: ITP1_7_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_C&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
    std::string buff {};
    std::getline( std::cin, buff );

    int r, c = 0;
    sscanf( buff.c_str(), "%d %d", &r, &c );

    std::vector<std::vector<long long>> table {};
    for ( int i = 0; i < r; ++i )
    {
        std::vector<long long> rows {};

        std::getline( std::cin, buff );
        std::istringstream iss { buff };
        for ( int j = 0; j < c; ++j )
        {
            std::getline( iss, buff, ' ' );
            rows.emplace_back( std::stoll( buff ) );
        }

        // 各行の合計値は、読み取り時に算出する
        auto&& sum = std::accumulate( rows.cbegin(), rows.cend(), 0LL );
        rows.emplace_back( sum );

        table.emplace_back( rows );
    }

    // 最終行の算出
    std::vector<long long> lastRow( c + 1, 0LL );
    for ( int i = 0; i < r; ++i )
    {
        for ( int j = 0; j < c + 1; ++j )
        {
            lastRow[j] += table[i][j];
        }
    }
    table.emplace_back( lastRow );

    // 出力
    for ( auto&& rows : table )
    {
        std::cout << rows.front();
        std::for_each( rows.cbegin() + 1, rows.cend(), [](auto&& x) { std::cout << " " << x; } );
        std::cout << std::endl;
    }
    return 0;
}
