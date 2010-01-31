#include "std_lib_facilities.h"

//Oppgave 1

int main()
{
   int read;
   int read1;

   while ( cin >> read >> read1 )
     {  
        cout << "First integer is: "<< read 
             << '\n' 
             << "Second integer is: " << read1 
             << '\n'
             << endl;
//slutt av oppgave 1

//Oppgave 2
        if ( read < read1 )
        
           cout << "the smaller value is: " << read
                << '\n' << endl;
        if ( read1 < read )
           
           cout << "the smaller value is: " << read1
                << '\n' << endl;
        if ( read > read1 )
         
           cout << "the larger value is: " << read
                << '\n' << endl;
        if ( read1 > read )
         
           cout << "the larger value is: " << read1
                << '\n' << endl;
//slutt av oppgave 2 

//Oppgave 3
        if ( read == read1 && read1 == read )
           cout << "The numbers are equal "
                <<'\n' << endl;       
     }
//Slutt av Oppgave 3
//Oppgave 4 er bare bytte int for double ellers ikke noe annet

//Oppgave 5
        
   return 0;
}

