// objpart.cpp
// widget part as an object

#include <iostream>
using namespace std;

// define class
class part
{
 private:
   //ID number of widget
   int modelnumber;

   //ID number of widget part
   int partnumber;

   //cost of part
   float cost;

 public:
   //set data
   void setpart(int mn, int pn, float c)   
   {
       modelnumber = mn;
       partnumber = pn;
       cost = c;
   }

   //dispaly data
   void showpart()
   {
      cout << "Model " << modelnumber;
      cout << ", part " << partnumber;
      cout << ", costs $" << cost << endl;
   }
   
};

int main()
 {
   // define object of class part
   part part1;

   // call member function setpart
   part1.setpart(3564, 326, 638.2);

   // call member function showpart
   part1.showpart();
   return 0;

 }
