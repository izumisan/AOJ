// AOJ: ITP1_6_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_A&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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

    for ( std::vector<int>::const_reverse_iterator rit = values.crbegin();
          rit != values.crend();
          ++rit )
    {
        if ( rit != values.crbegin() )
        {
            std::cout << " ";
        }
        std::cout << *rit;
    }
    std::cout << std::endl;

    return 0;
}
