// AOJ: ITP1_7_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B&lang=jp
#include <iostream>
#include <string>

int solve( const int n, const int x )
{
    int count = 0;
    for ( int i = 1; i <= n - 2; ++i )
    {
        for ( int j = i + 1; j <= n - 1; ++j )
        {
            int k = x - ( i + j );
            if ( ( j < k ) && ( k <= n ) )
            {
                ++count;
            }
        }
    }
    return  count;
}

int main()
{
    while ( true )
    {
        std::string buff {};

        std::getline( std::cin, buff );
        if ( buff == "0 0" )
        {
            break;
        }

        int n, x = 0;
        sscanf( buff.c_str(), "%d %d", &n, &x );

        std::cout << solve( n, x ) << std::endl;
    }
    return 0;
}
