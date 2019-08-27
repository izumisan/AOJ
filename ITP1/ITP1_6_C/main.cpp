// AOJ: ITP1_6_C
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_C&lang=jp
#include <iostream>
#include <string>

int main()
{
    constexpr int maxBuilding = 4;
    constexpr int maxFloor = 3;
    constexpr int maxRoom = 10;

    int persons[maxBuilding][maxFloor][maxRoom] = {};

    std::string buff {};

    std::getline( std::cin, buff );
    int n = std::stoi( buff );

    for ( int i = 0; i < n; ++i )
    {
        std::getline( std::cin, buff );
        int b, f, r, v = 0;
        sscanf( buff.c_str(), "%d %d %d %d", &b, &f, &r, &v );

        persons[b-1][f-1][r-1] += v;
    }

    for ( int b = 0; b < maxBuilding; ++b )
    {
        for ( int f = 0; f < maxFloor; ++f )
        {
            for ( int r = 0; r < maxRoom; ++r )
            {
                std::cout << " " << persons[b][f][r];
            }
            std::cout << std::endl;
        }

        // 最終行には区切りを出力しない
        if ( b != maxBuilding - 1 )
        {
            std::cout << "####################" << std::endl;
        }
    }

    return 0;
}
