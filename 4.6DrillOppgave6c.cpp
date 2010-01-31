#include "std_lib_facilities.h"

int main()

{

const double cm_per_inch = 2.54;
const double m_per_cm = 100;
int length = 1;
char unit ='a';

cout << "please enter a length followed by a unit( c or i ):\n";
cin >> length >> unit;

switch ( unit )
{

case'i':
      cout << length << "in== " << cm_per_inch * length << "cm\n";
      break;
case 'c':
      cout << length << "cm == " << length/cm_per_inch << "in\n";
      break;
case 'm':
      cout << length << "m == " << length * m_per_cm << "cm\n";
      break;
default:
      cout << "is not recognize\n";
      break;

}

}