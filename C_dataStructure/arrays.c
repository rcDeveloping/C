#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>


int main(void) {
	
	// define an array with 3 elements
	long int c[3];
	
	printf("The size of array 'c' with 3 elements is: %zu bytes / %zu bits\n", sizeof c, sizeof c * 8);
	printf("The number of elements of array 'c' is: %zu\n", sizeof c / sizeof c[0] * 8);
	
	c[0] = 'A';
	c[1] = 0x42;
	c[2] = 67;
	
	printf("\nThe c element with index 0 is: %d\n", c[0]);
	printf("The c element with index 1 is: %d\n", c[1]);
	printf("The c element with index 1 is: %d\n", c[2]);
	
	printf("\nThe memory address of array c is: %p\n", c);
 	//printf("The memory address of array &c is: %p\n", &c);
 	printf("The memory address of the first element of array c is: %p\n", &c[0]);
 	printf("The memory address of the second element of array c is: %p\n", &c[1]);

	return 0;
}
