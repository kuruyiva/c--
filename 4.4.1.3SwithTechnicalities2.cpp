#include "std_lib_facilities.h"

int main()
{
   int y ='y';
     
      const char n ='n';
      const char m = '?';
 
      cout << "Do you like fish?\n";
      char a;
      cin >> a;

      switch (a) {

      case n:
           // . . .
           break;
      case m:
           // . . .
           break;
      case 'n': // er helt feil
           // . . .
           break;
      case y:
           // . . .
           break;
      default:
           // . . . 
           break;
      }
}