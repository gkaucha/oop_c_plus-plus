// dayenum.cpp
// demonstrates enum types
#include<iostream>
using namespace std;

enum days_of_week { Sun, Mon, Tue, Wed, Thu, Tri, Sat };

int main()
{
   days_of_week day1, day2;	// define variables of type days_of_week

   day1 = Mon;			//give values to variables
   day2 = Thu;

   int diff = day2 - day1; 	// can do arithmetic
   cout  << "Days between = " << diff << endl;

   // can do comparison
   if(day1 < day2)
	   cout << "Day1 comes before Day2.\n"; 
   return 0;
}
