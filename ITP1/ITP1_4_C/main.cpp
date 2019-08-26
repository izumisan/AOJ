// AOJ: ITP1_4_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C&lang=jp
#include <iostream>
#include <string>
#include <map>
#include <functional>

static const std::map<std::string, std::function<int(int, int)>> calculator_ =
{
    { "+", [](int x, int y){ return x + y; } },
    { "-", [](int x, int y){ return x - y; } },
    { "*", [](int x, int y){ return x * y; } },
    { "/", [](int x, int y){ return x / y; } }
};

int main()
{
    std::string buff {};
    int a, b = 0;
    std::string op {};
    while ( true )
    {
        std::cin >> a >> op >> b;
        if ( op == "?" )
        {
            break;
        }

        std::cout << calculator_.at( op )( a, b ) << std::endl;
    }

    return 0;
}
