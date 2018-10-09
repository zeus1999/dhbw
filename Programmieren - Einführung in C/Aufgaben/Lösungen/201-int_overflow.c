/* check_int_overflow.c Check when integer numbers are overflowing */
// TO DO 1: complete the overflow detecion for other types 
// TO DO 2: extend this to unsigned integers 
// TO DO 3: stop counting after first overflow 
// TO DO 4: estimate how many operations are performed per second.
// TO DO 5 (optional): Use this program as benchmark for your CPU performance and compare it with other students' computers,
// TO DO 6 (optional): Check the CPU load when running the programm. What do you observe? 

#include <stdio.h>

int main() {

   char c, old_c;
   short s, old_s;
   int i, old_i, bc, bs, bi, bl, bui;
   long l, old_l;
   unsigned int ui, old_ui;
   
   bc = 0;
   bs = 0;
   bi = 0;
   bl = 0;
   bui = 0;
   c=0;

   while(1) {  // repeat the following code in { .... } endless
   	  	if(!bc){
	      old_c=c; // remember previous value
	      c=c+1;   // increase c by 1, you may also use the short form: c++;
	      if(old_c>c) { // execute the following code in { ... } if condition is true
		     printf("char  overflow %d -> %d \n", old_c, c);
		     bc = 1;
	      }
		}
		if(!bs){
	      old_s=s; // remember previous value
	      s=s+1;   // increase c by 1, you may also use the short form: c++;
	      if(old_s>s) { // execute the following code in { ... } if condition is true
		     printf("short  overflow %d -> %d \n", old_s, s);
		     bs = 1;
	      }
		}
		if(!bi){
	      old_i=i; // remember previous value
	      i=i+1;   // increase c by 1, you may also use the short form: c++;
	      if(old_i>i) { // executei the following code in { ... } if condition is true
		     printf("integer  overflow %d -> %d \n", old_i, i);
		     bi = 1;
	      }	
		}
		if(!bl){
	      old_l=l; // remember previous value
	      l=l+1;   // increase c by 1, you may also use the short form: c++;
	      if(old_l>l) { // execute the following code in { ... } if condition is true
		     printf("long  overflow %d -> %d \n", old_l, l);
		     bl = 1;
	      }
		}
		if(!bui){
	       old_ui=ui; // remember previous value
	      ui=ui+1;   // increase c by 1, you may also use the short form: c++;
	      if(old_ui>ui) { // execute the following code in { ... } if condition is true
		     printf("unsigned int  overflow %u -> %u \n", old_ui, ui);
		     bui = 1;
	      }
		}
		
      // printf format strings:  
      // char, short, int: "%d"
      // long: "%ld"
      // unsigned int: "%u"
   }
}
