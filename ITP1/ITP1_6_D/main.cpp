// AOJ: ITP1_6_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<int> solve( const std::vector<std::vector<int>>& m, const std::vector<int>& v )
{
    std::vector<int> ret( m.size(), 0.0 );
    for ( int i = 0; i < m.size(); ++i )
    {
        for ( int j = 0; j < v.size(); ++j )
        {
            ret[i] += m[i][j] * v[j];
        }
    }
    return ret;
}

int main()
{
    std::string buff {};

    std::getline( std::cin, buff );
    int n, m = 0;
    sscanf( buff.c_str(), "%d %d", &n, &m );

    std::vector<std::vector<int>> mat {};
    for ( int i = 0; i < n; ++i )
    {
        std::vector<int> rows {};

        std::getline( std::cin, buff );
        std::istringstream iss { buff };
        for ( int j = 0; j < m; ++j )
        {
            std::getline( iss, buff, ' ' );
            rows.emplace_back( std::stoi( buff ) );
        }

        mat.emplace_back( rows );
    }

    std::vector<int> vec {};
    for ( int i = 0; i < m; ++i )
    {
        std::getline( std::cin, buff );
        vec.emplace_back( std::stoi( buff ) );
    }

    auto&& answer = solve( mat, vec );
    for ( auto&& x : answer )
    {
        std::cout << x << std::endl;
    }

    return 0;
}
