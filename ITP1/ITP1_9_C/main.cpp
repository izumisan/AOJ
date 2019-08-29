// AOJ: ITP1_9_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_C&lang=jp
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string buff {};
    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    int taroScore = 0;
    int hanakoScore = 0;
    for ( int i = 0; i < n; ++i )
    {
        std::getline( std::cin, buff );

        std::istringstream iss { buff };
        std::getline( iss, buff, ' ' );
        std::string taro = buff;
        std::getline( iss, buff, ' ' );
        std::string hanako = buff;

        int result = taro.compare( hanako );
        if ( result < 0 )
        {
            hanakoScore += 3;
        }
        else if ( result == 0 )
        {
            taroScore += 1;
            hanakoScore += 1;
        }
        else
        {
            taroScore += 3;
        }
    }
    std::cout << taroScore << " " << hanakoScore << std::endl;
    return 0;
}
