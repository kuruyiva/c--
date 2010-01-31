#include "std_lib_facilities.h"

int square(int); //declaration of square
double sqrt(double); // declaration of sqrt

int square( int x )
{
   return x*x;
}

double sqrt( double y )
{
  return y+y;
}

int main()
{
  cout << square(2) << '\n';
  cout << square(10) <<'\n';
  cout << sqrt(10.10) <<'\n';
  cout << sqrt(20.10) <<'\n';
}