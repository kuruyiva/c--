#include "std_lib_facilities.h"




int main()

{

 
   
int random =0;
   
srand(time(NULL));
 
   
for(int index=0;index<10; index++)
       
{
          
random = (rand()%10)+1;
	  
cout << random << endl;
       
}
   


}

