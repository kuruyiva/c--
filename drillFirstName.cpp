#include "std_lib_facilities.h"


int main()
{
   int a = 0;
   char friend_sex = a;
   int age = 0;
      
   cout << "Enter the name of the person you want to write to\n";
   cout << "Enter the name of your friend\n";
   cout << "Enter m for male or f for female\n";
   cout << "Enter your friends age\n";
   
   string addline = " How are you ? I am fine. I miss you.\n ";
   string friend_name;
   string first_name;
   cin >> first_name >> friend_name;
   cin >> friend_sex;
   cin >> age;
   
   if ( age < 110)
     {
	
   if ( friend_sex == 'm' )
   cout << "Dear " 
        << first_name << "," 
        << addline << " have you seen "
        << friend_name << " lately ?"
        << ". If you see " 
        << friend_name << " please ask him to call me. I hear you just had a birthday and you are "
        << age << " years old\n";
   
   if( friend_sex == 'f' )
       cout << "Dear "
             << first_name << ","
             << addline << " have you seen "
             << friend_name << " lately ?" 
             << ". If you see "
             << friend_name << " please ask her to call me. I hear you just had a birthday and you are "
             << age << " years old\n";
     }
   else 
     error("you're kidding\n");
   
   if( age <= 12 )
     cout << "Next year you will be " 
          << age + 1 << " right ?\n";
   if( age == 17 )
     cout << "Next year you will be able to vote.\n";
   if( age >= 70 ) 
     cout << "I hope you are enjoying retirement.\n";
}
