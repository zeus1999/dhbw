/* bitwise_operators.c binary operations */
/* TO DO 1: Something is wrong with the output 
	   Hint: put the output first into an additional variable m, 
	   use bitwise operators and count the digits */
/* TO DO 2: A second number should be entered and 
	   both numbers should be combined with the various bitwise
	   operators before providing the output */
/* TO DO 3: Use signed integers and see how negative numbers 
           are presented in binary format */

#include <stdio.h>

int main() 
{
	unsigned int n;

	printf("Please enter an integer number:");
	scanf("%u",&n);
	/* TODO 2
	printf("Please enter an integer number:");
	scanf("%u",&o);
	
	int o = -999; TODO 3
	n = n | ~o << 1;
	*/
	printf("\n Binary representation: ");
	unsigned int m = 0;
	int length = 0;
	while(n>0) {
		m = m << 1;
		m += n&1;
		n=n >> 1;
		length++;
	}
	while(length > 0) {
		printf("%d", m&1);
		m=m >> 1;
		length--;
	}
	
}
