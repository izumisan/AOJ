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
            var w = Console.ReadLine().ToLower();

            int count = 0;
            while ( true )
            {
                var buff = Console.ReadLine();
                if ( buff == "END_OF_TEXT" )
                {
                    break;
                }
                count += buff.Split( new string[] { " " }, StringSplitOptions.RemoveEmptyEntries )
                         .ToList()
                         .Count( x => string.Compare( x, w, true ) == 0 );
            }

            Console.WriteLine( count );
        }
    }
}
