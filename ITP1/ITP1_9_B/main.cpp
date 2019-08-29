// AOJ: ITP1_9_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_B&lang=jp
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::string solve( const std::string& deck, const std::vector<int>& shuffles )
{
    auto&& count = std::accumulate( shuffles.cbegin(), shuffles.cend(), 0 );
    count %= deck.size();
    auto&& ret = ( deck + deck ).substr( count, deck.size() );
    return ret;
}

int main()
{
    while ( true )
    {
        std::string buff {};
        std::getline( std::cin, buff );

        if ( buff == "-" )
        {
            break;
        }

        std::string deck { buff };

        std::getline( std::cin, buff );
        int m = std::stoi( buff );

        std::vector<int> shuffles {};
        for ( int i = 0; i < m; ++i )
        {
            std::getline( std::cin, buff );
            shuffles.emplace_back( std::stoi( buff ) );
        }

        std::cout << solve( deck, shuffles ) << std::endl;
    }
    return 0;
}
