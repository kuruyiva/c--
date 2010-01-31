#include "std_lib_facilities.h"

int main()
{
   double d = 2.5;
   int i = 2;
   
   double d2 = d/i;
   int i2 = d/i;
   
   cout << d2 << " " << i2 << endl;
   cout << " Enter a number of degree Celsius to be converted to Fahrenheit"
        << endl;
   double dc;
   cin >> dc;
   double df = 9.0/5.0*dc + 32;
   
   cout << df << " Converted to Fahrenheit" << endl;
   return 0;
}
