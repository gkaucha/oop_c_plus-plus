// englarea.cpp
// demonstrates nested structures
#include<iostream>
using namespace std;

struct Distance			// English distance
{
   int feet;
   float inches;
};

struct Room			// Rectangular area
{
   Distance length;		// length of rectangle in feet and inches
   Distance width;		// width of rectangel in feet and inches
};

int main()
{
   Room dining;			// defina a room

   dining.length.feet = 13;	// assign values to room
   dining.length.inches = 6.5;
   dining.width.feet = 10;
   dining.width.inches = 0.0;

   // convert lenght and width
   float l = dining.length.feet + dining.length.inches/12;
   float w = dining.width.feet + dining.width.inches/12;

   // find area and display it
   cout << "Area of Dining room is " << l * w << " Square feet\n";

   return 0;
}
