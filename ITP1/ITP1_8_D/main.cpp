// AOJ: ITP1_8_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_D&lang=jp
#include <iostream>
#include <string>

int main()
{
    std::string s {};
    std::getline( std::cin, s );

    std::string p {};
    std::getline( std::cin, p );

    std::string base = s + s;
    bool answer = base.find( p ) != std::string::npos;

    std::cout << ( answer ? "Yes" : "No" ) << std::endl;

    return 0;
}
