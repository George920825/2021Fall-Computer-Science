#include <iostream>
using namespace std;
 
 int main(void)
 {
    int a, b, c, i = 1, limit = 500;
    puts("Pythagorean Triples:");
    for ( a = 1; a < limit; ++a )
    {
 	  for ( b = a + 1; b < limit; ++b )
 	  {
 		 for ( c = b + 1; c < limit; ++c )
 		 {
 			if ( a * a + b * b == c * c )
 			{
 			   //printf("%3d : { %3d, %3d, %3d }\n", ++i, a, b, c);
 			   cout<< i++ << " : { " << a << ", "<< b << ", "<< c << " }"<<endl;
 			}
 		 }
 	  }
    }
    return 0;
 }
