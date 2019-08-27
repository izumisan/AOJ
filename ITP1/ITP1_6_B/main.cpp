// AOJ: ITP1_6_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_B&lang=jp
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <iterator>

int main()
{
    std::string buff {};

    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    std::unordered_map<std::string, std::set<int>> hands {};
    for ( int i = 0; i < n; ++i )
    {
        std::getline( std::cin, buff );

        char suit {};
        int rank = 0;
        sscanf( buff.c_str(), "%c %d", &suit, &rank );

        hands[std::string {suit}].insert( rank );
    }

    const std::set<int> all = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
    for ( auto&& suit : { "S", "H", "C", "D" } )
    {
        auto&& cards = hands[suit];
        std::set<int> result {};

        // 差集合
        std::set_difference( all.cbegin(), all.cend(),
                             cards.cbegin(), cards.cend(),
                             std::inserter( result, result.end() ) );

        std::for_each( result.cbegin(), result.cend(), [&suit](int x)
        {
            std::cout << suit << " " << x << std::endl;
        } );
    }

    return 0;
}
