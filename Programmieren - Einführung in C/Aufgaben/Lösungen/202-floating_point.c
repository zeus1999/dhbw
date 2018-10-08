/* floating_point.c Investigate the precision and borders of floating point numbers */
// TO DO 1: The program doesn't seem to stop. Maybe f and d should be increased faster? 
// TO DO 2: How does the 'limit behaviour' differ from integer numbers? 
// TO DO 3: Insert a comparison to check when the float and double values are different from each other,
//          print the difference 
// TO DO 4: Related to TO DO 1: How can you find the maximum number fast, but also with high precision?
// TO DO 5: Competition: Who generates the highest float number? (But not: NaN)

#include <stdio.h>

int main() {
   float f, old_f;
   double d, old_d;
   
   f=d=1;

   while(1) {   
      old_f=f; 
	  old_d=d; 
      f=f+100000000000000000000000000000000000000000000000000; 
	  //d=d+d;

      /*if(old_f>=f)*/ 
	  printf("%f -> %f \n", old_f, f); 
      //if(old_d>=d) printf("double limit %f -> %f \n", old_d, d);
      /*if(f == d){
      	printf("die sind gleich");
	  }*/
   }
}
