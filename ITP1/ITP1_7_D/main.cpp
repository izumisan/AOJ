// AOJ: ITP1_7_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

// エイリアステンプレート
template <class T>
using matrix = std::vector<std::vector<T>>;

template <class T>
matrix<T> solve( const matrix<T>& a, const matrix<T>& b )
{
    const int row = a.size();
    const int col = b.front().size();
    matrix<T> ab( row, std::vector<T>( col, 0 ) );

    for ( int i = 0; i < row; ++i )
    {
        for ( int j = 0; j < col; ++j )
        {
            for ( int k = 0; k < b.size(); ++k )
            {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return  ab;
}

int main()
{
    // 標準入力から n x m 行列 を読み取る
    auto&& getMatrixAction = []( const int row, const int col )
    {
        matrix<long long> ret {};
        std::string buff {};
        for ( int i = 0; i < row; ++i )
        {
            std::vector<long long> rows {};

            std::getline( std::cin, buff );
            std::istringstream iss { buff };
            for ( int j = 0; j < col; ++j )
            {
                std::getline( iss, buff, ' ' );
                rows.emplace_back( std::stoi( buff ) );
            }
            ret.emplace_back( rows );
        }
        return ret;
    };

    // 行列を標準出力に出力する
    auto&& printMatrixAction = []( auto&& mat )
    {
        for ( auto&& row : mat )
        {
            std::cout << row.front();
            std::for_each( row.cbegin() + 1, row.cend(), [](auto&& x){ std::cout << " " << x; } );
            std::cout << std::endl;
        }
    };

    std::string buff {};

    std::getline( std::cin, buff );
    int n, m, l = 0;
    sscanf( buff.c_str(), "%d %d %d", &n, &m, &l );

    auto&& matA = getMatrixAction( n, m );  // n x m matrix
    auto&& matB = getMatrixAction( m, l );  // m x l matrix

    auto&& answer = solve<long long>( matA, matB );
    printMatrixAction( answer );

    return 0;
}
