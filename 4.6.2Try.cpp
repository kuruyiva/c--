#include "std_lib_facilities.h"

int main()
{

vector<string>words;
 string temp;
vector<string>disliked(10);
disliked[0]="Brocolli";
disliked[1]="Banana";
disliked[2]="Chocolat";
disliked[3]="Beers";
disliked[4]="Solo";
disliked[5]="Agurk";
disliked[6]="Salat";
disliked[7]="Tomato";
disliked[8]="Hamburger";
disliked[9]="Coca";

  cin>>temp; //read whitespace-separated words
     words.push_back(temp); // put into vector

   cout << "Number of words: "<<words.size() << endl;

   sort(words.begin(), words.end());

   for (int i = 0; i <words.size(); ++i)
         if ( i==0 || words[i-1]!=words[i])
                cout << words[i]<<"\n";

   if (temp == disliked)
      cout << "I like" << temp<< endl;

        

}