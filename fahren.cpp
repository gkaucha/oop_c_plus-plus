// fahren.cpp
// demonstrate newline, cin
#include <iostream>
using namespace std;

int main()
{
  int ftemp;      // temprature in Fahrenheit

  cout <<  "Enter Temprature in fahrenheit:";
  cin >> ftemp;

  int ctemp = (ftemp-32) * 5 / 9;

  cout << "Equivalent in Celsius is : " << ctemp << '\n';

  return 0;
}