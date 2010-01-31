#include "std_lib_facilities.h"

//Oppgave 6

int main()
{

int number;
int smallest;

cout << "Enter a number (0 to end)." << endl;
cin >> number;

smallest = number;

while (number < 5)
{
    cout << "Enter a number" << endl;
    cin >> number;

      if (number < smallest)
      {
         smallest = number;
      }   
}

cout << "Smallest  " << smallest << endl;
return 0;

}
