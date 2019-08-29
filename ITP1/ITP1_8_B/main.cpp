// AOJ: ITP1_8_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_B&lang=jp
#include <iostream>
#include <string>
#include <numeric>

int main()
{
    while ( true )
    {
        std::string input {};
        std::getline( std::cin, input );
        if ( input == "0" )
        {
            break;
        }

        auto&& answer = std::accumulate( input.cbegin(), input.cend(), 0, [](auto&& sum, char x)
        {
            sum += std::atoi( &x );
            return sum;
        } );

        std::cout << answer << std::endl;
    }
    return 0;
}
