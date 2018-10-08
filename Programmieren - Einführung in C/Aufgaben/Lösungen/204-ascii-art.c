/* ascii_art.c */
/* TO DO: Play around with the operators to create beautiful ascii art 
   - use different arithmetics
   - use different comparisons
   - use different characters (e.g. more than two) */

#include <stdio.h>

int main() 
{
   int x, y, v;
	int radius = 15;
	int height = 170;
	int width = 170;
   for(y=0; y<height; y++) {
      for(x=0; x<width; x++) {
	     v=(x)*(x-radius)+(y-radius)*(y);
         if(v%4) printf("|");
         else printf("+");
      }
      printf("\n");
   }
}
