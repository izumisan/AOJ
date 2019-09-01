// AOJ: ALDS1_1_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_A&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

void insertionSort( std::vector<int>& a )
{
    for ( int i = 1; i < a.size(); ++i )
    {
        int v = a[ i ];
        int j = i - 1;
        while ( ( 0 <= j ) && ( v < a[ j ] ) )
        {
            a[ j + 1 ] = a[ j ];
            --j;
        }
        a[j+1] = v;

        std::cout << a.front();
        std::for_each( a.cbegin() + 1, a.cend(), [](auto&& x) { std::cout << " " << x; } );
        std::cout << std::endl;
    }
}

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
    auto&& values = split( buff );

    std::cout << values.front();
    std::for_each( values.cbegin() + 1, values.cend(), [](auto&& x) { std::cout << " " << x; } );
    std::cout << std::endl;

    insertionSort( values );

    return 0;
}
