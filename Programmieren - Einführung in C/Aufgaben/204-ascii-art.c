/* ascii_art.c */
/* TO DO: Play around with the operators to create beautiful ascii art 
   - use different arithmetics
   - use different comparisons
   - use different characters (e.g. more than two) */

#include <stdio.h>

int main() 
{
   int x, y, v;

   for(y=0; y<30; y++) {
      for(x=0; x<30; x++) {
	     v=(x-15)*(x-15)+(y-15)*(y-15);
         if(v>60) printf(" ");
         else printf("o");
      }
      printf("\n");
   }
}
