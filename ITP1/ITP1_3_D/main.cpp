// AOJ: ITP1_3_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D&lang=jp
#include <iostream>
#include <string>

int main()
{
    std::string buff = "";
    std::getline( std::cin, buff );
    int a, b, c = 0;
    sscanf( buff.c_str(), "%d %d %d", &a, &b, &c );

    int answer = 0;
    for ( int i = a; i <= b; ++i )
    {
        if ( c % i == 0 )
        {
            ++answer;
        }
    }
    std::cout << answer << std::endl;
    return 0;
}
