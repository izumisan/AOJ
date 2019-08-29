// AOJ: ITP1_9_D
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_D&lang=jp

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Cs
{
    class Program
    {
        static void Main( string[] args )
        {
            var str = Console.ReadLine();
            int q = int.Parse( Console.ReadLine() );

            for ( int i = 0; i < q; ++i )
            {
                var commands = Console.ReadLine().Split( new string[] { " " }, StringSplitOptions.RemoveEmptyEntries ).ToList();
                var cmd = commands.ElementAt( 0 );
                int a = int.Parse( commands.ElementAt( 1 ) );
                int b = int.Parse( commands.ElementAt( 2 ) );
                var p = ( 3 < commands.Count ) ? commands.ElementAt( 3 ) : string.Empty;

                switch ( cmd )
                {
                case "print":
                    var printText = str.Substring( a, b - a + 1 );
                    Console.WriteLine( printText );
                    break;
                case "reverse":
                    var reverseText = string.Empty;
                    if ( 0 < a )
                    {
                        reverseText += str.Substring( 0, a );
                    }
                    str.Substring( a, b - a + 1 ).Reverse().ToList().ForEach( x => reverseText += x );
                    if ( b < str.Length - 1 )
                    {
                        reverseText += str.Substring( b + 1 );
                    }
                    str = reverseText;
                    break;
                case "replace":
                    var replaceText = string.Empty;
                    if ( 0 < a )
                    {
                        replaceText += str.Substring( 0, a );
                    }
                    replaceText += p;
                    if ( b < str.Length - 1 )
                    {
                        replaceText += str.Substring( b + 1 );
                    }
                    str = replaceText;
                    break;
                default:
                    break;
                }
            }
        }
    }
}
