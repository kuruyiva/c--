#include "std_lib_facilities.h"

//Oppgave 6

int main()
{
   int read= 0;
   int number= 0;
   int largest1= 0;
   int largest2= 0;

   while ( read < 5)
     {   
        cout << " " << read;
        cin >> number;
        cin.get();    
  
        if ( largest1 < number )
        {

           largest2 = largest1;
           largest1 = number;
        }

        else if (largest2 < number )
        {
           largest2 = number;
        }
        ++read;
        
       
     }
     cout << "Largest so far: " << largest1 <<endl;
     cout << "Second so far largest: " << largest2 << endl;
}
