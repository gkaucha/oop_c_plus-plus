// circarea.cpp
// use floating point variables

#include <iostream>
using namespace std;

int main()
{
  float radius;                         // variable of type float
  const float PI = 3.14159F;            // type const float

  cout << "Enter radius of circle: ";   // prompt
  cin >> radius;                        // get radius

  float area = PI * radius * radius;    // calculate area 

  cout << "Area of circle is " << area << endl;   // display answer

  return 0;
}