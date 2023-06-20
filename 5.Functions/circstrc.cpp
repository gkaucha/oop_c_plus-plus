// circstrc.cpp
// circles as graphics objects
// demonstrates passing a strucute to a function

#include "borlacon.h"  // for graphics function
#include <ncurses.h>  // for ncurses function

//graphics circle
struct circle
{
   // coordinates of center
   int xCo, yCo;
   int radius;
   
   //color
   color fillcolor;
   
   // fill pattern
   fstyle fillstyle;

};


void circ_draw(circle c)
{
   set_color(c.fillcolor);    //set color
   set_fill_style(c.fillstyle);  //set fill pattern

   //draw solid circle
}


int main()
{
   //initailize graphics system
   init_graphics();

   //create circles
   circle c1 = { 15,7, 5, cBLUE, X_FILL };
   circle c2 = { 41, 12, 7, cRED, O_FILL };
   circle c3 = { 65, 18, 4, cGREEN, MEDIUM_FILL };


   // draw circles
   circ_draw(c1);
   circ_draw(c2);
   circ_draw(c3);

   //cursor to lower left corner
   set_cursor_pos(1, 25);

   return 0;
}



