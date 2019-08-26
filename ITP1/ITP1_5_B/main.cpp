// AOJ: ITP1_5_B
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_5_B&lang=jp
#include <iostream>
#include <string>

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

        int h, w = 0;
        sscanf( buff.c_str(), "%d %d", &h, &w );

        for ( int i = 0; i < h; ++i )
        {
            for ( int j = 0; j < w; ++j )
            {
                if ( ( i == 0 ) || ( i == h - 1 ) ||
                     ( j == 0 ) || ( j == w - 1 ) )
                {
                    std::cout << "#";
                }
                else
                {
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}
