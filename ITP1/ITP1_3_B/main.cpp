// AOJ: ITP1_3_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B&lang=jp
#include <iostream>
#include <string>
int main()
{
    std::string buff = "";
    int i = 0;
    while ( std::getline( std::cin, buff ) )
    {
        if ( buff == "0" )
        {
            break;
        }
        ++i;
        std::cout << "Case " << i << ": " << buff << std::endl;
    }
    return 0;
}
