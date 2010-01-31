#include "std_lib_facilities.h"

int main()
{
  vector<int> v(6);
  v[0] = 5;
  v[1] = 7;
  v[2] = 9;
  v[3] = 4;
  v[4] = 6;
  v[5] = 8;
  
  vector<string> philosopher(4); //vector of 4 strings
  philosopher[0] = "kant";
  philosopher[1] = "Plato";
  philosopher[2] = "Hume";
  philosopher[3] = "Kierkegaard";

  cout << v[5] << endl;
  cout << philosopher[2] << endl;
  return 0;
}