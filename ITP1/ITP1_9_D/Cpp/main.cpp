// AOJ: ITP1_9_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_D&lang=jp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string reverse( const std::string& str )
{
    std::string ret {};
    for ( auto&& rit = str.crbegin(); rit != str.crend(); ++rit )
    {
        ret += *rit;
    }
    return ret;
}

//std::string replace( const std::string& str, const std::string& before, const std::string& after )
//{
//    std::string ret { str };
//    auto&& found = str.find_first_of( before );
//    if ( found != std::string::npos )
//    {
//        ret.replace( found, before.size(), after );
//    }
//    return  ret;
//}

std::string replace( const std::string& str, const int pos, const std::string& text )
{
    std::string ret { str };
    for ( int i = 0; i < text.size(); ++i )
    {
        ret[pos+i] = text[i];
    }
    return ret;
}

class String
{
public:
    String( const std::string& str )
        : m_str( str )
    {}
public:
    void command( const std::string& cmd )
    {
        std::string buff {};
        std::istringstream iss { cmd };
        std::vector<std::string> items {};
        while ( std::getline( iss, buff, ' ' ) )
        {
            items.emplace_back( buff );
        }

        auto&& item0 = items.at( 0 );
        if ( item0 == "print" )
        {
            int a = std::stoi( items.at( 1 ) );
            int b = std::stoi( items.at( 2 ) );

            auto&& target = m_str.substr( a, b - a + 1 );
            std::cout << target << std::endl;
        }
        else if ( item0 == "reverse" )
        {
            int a = std::stoi( items.at( 1 ) );
            int b = std::stoi( items.at( 2 ) );

            auto&& target = m_str.substr( a, b - a + 1 );
//            m_str = replace( m_str, target, reverse( target ) );
            m_str = replace( m_str, a, reverse( target ) );
        }
        else if ( item0 == "replace" )
        {
            int a = std::stoi( items.at( 1 ) );
            int b = std::stoi( items.at( 2 ) );
            auto&& p = items.at( 3 );

//            auto&& target = m_str.substr( a, b - a + 1 );
//            m_str = replace( m_str, target, p );
            m_str = replace( m_str, a, p );
        }
        else
        {}
    }
private:
    std::string m_str = {};
};

int main()
{
    std::string buff {};
    std::getline( std::cin, buff );

    String input { buff };

    std::getline( std::cin, buff );
    const int q = std::stoi( buff );

    for ( int i = 0; i < q; ++i )
    {
        std::getline( std::cin, buff );
        input.command( buff );
    }
    return 0;
}
