//partinit.cpp
// demonstrates initialization of strucutre variables

#include<iostream>
using namespace std;

struct part		// specify a structure
{
   int modelnumber;	// ID number of widget
   int partnumber;	// ID number of widget part
   float cost;		// cost of part
};

int main()
{
   part part1 = { 6244, 437, 219.55F };		//initalize varibale
   part part2;					// define variable

   // display first variable
   cout << "Model " << part1.modelnumber;
   cout << ", part " << part1.partnumber;
   cout << ", cost $" << part1.cost << endl;

   part2 = part1;	// assign first variable to second

   // display second variable
   cout << "Model " << part2.modelnumber;
   cout << ", part " << part2.partnumber;
   cout << ", cost $" << part2.cost << endl;

   return 0;
}
