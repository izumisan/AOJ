// AOJ: ITP1_7_A
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_A&lang=jp
#include <iostream>
#include <string>
int main()
{
    while ( true )
    {
        std::string buff {};
        std::getline( std::cin, buff );
        int m, f, r = 0;
        sscanf( buff.c_str(), "%d %d %d", &m, &f, &r );
        if ( ( m == -1 ) && ( f == -1 ) && ( r == -1 ) )
        {
            break;
        }

        std::string grade {};
        const int sum = m + f;

        if ( ( m == -1 ) || ( f == -1 ) )
        {
            grade = "F";
        }
        else if ( 80 <= sum )
        {
            grade = "A";
        }
        else if ( 65 <= sum )
        {
            grade = "B";
        }
        else if ( 50 <= sum )
        {
            grade = "C";
        }
        else if ( 30 <= sum )
        {
            if ( 50 <= r )
            {
                grade = "C";
            }
            else
            {
                grade = "D";
            }
        }
        else
        {
            grade = "F";
        }

        std::cout << grade << std::endl;
    }
    return 0;
}
