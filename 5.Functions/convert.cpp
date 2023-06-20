// convert.cpp
// demonstrates return values, converts pounds to kg

#include<iostream>
using namespace std;

// declaration
float lbstokg(float);

int main()
{ 
  float lbs, kgs;

  cout << "\nEnter your weight in pounds: ";
  cin >> lbs;

  kgs = lbstokg(lbs);

  cout << "Your weight in kilogram is " << kgs << endl;
  return 0;
}

// lbstokg()
// converts pounds to kgs
float lbstokg(float pounds)
{ 
  float kilograms = 0.453592 * pounds;
  return kilograms;
}
