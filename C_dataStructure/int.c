#include <stdio.h>
#include <limits.h>
#include <stdint.h> //to ensure that the integer variable will have a certain number of bits
#include <stdlib.h>

int main(void) {
	int i;
	
	//unsigned int
	unsigned int u = UINT_MAX;
	
	uint16_t i16 = SHRT_MAX;
	
	//short int
	short int shortInt;
	
	//long int on windows is 32 bits and on Linux is 64 bits
	long int longInt;

	
	//long long int
	long long int longLongInt;
	
	
	//size_t from stdlib.h
	size_t st;
	
	/*
	storage class register int
	Registers are faster than memory to access, so the variables which are 
	most frequently used in a C program can be put in registers using register keyword.
	Register can only be used within a block (local), it can not be used in
	the global scope (outside main).
	*/
	register int rg = 0;
	
	// minimum value of int
	printf("The size of int : %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
	
	/*
	to output the value of an int variable, you must use the format 
	specifier %d or %i for decimal numbers
	*/
	printf("The Minimum Value of unsigned int: %u\n", i);
	
	//Maximum value of int
	printf("The Maximum Value of signed int: %d\n", INT_MAX);
	
	/*
	Maximum value of unsigned int
	to output the value of an unsigned int variable, you must use the
	format specifier %u for decimal numbers
	*/
	//printf("The size of unsigned int: %zu bytes / %zu bits\n", sizeof u, \
	sizeof u * 8);
	printf("The Maximum value of unsigned int is: %u\n", u);
	
	
	printf("\nThe size of uint16_t (unsigned int): %zu bytes / %zu bits\n",\
	sizeof i16, sizeof i16 * 8);
	printf("The Maximum value of uint16_t is: %u\n", i16);
		
	// short int
	printf("\nThe size of short int is: %zu bytes / %zu bits\n", sizeof \
	shortInt, sizeof shortInt * 8);
	printf("The Minimum value of short int is: %d\n", SHRT_MIN);
	printf("The Maximum value of short int is: %d\n", SHRT_MAX);
	
	//long int
	printf("\nThe size of long int is: %zu bytes / %zu bits\n", sizeof\
	 longInt, sizeof longInt * 8);
	printf("The minimum value of long int is: %ld\n", LONG_MIN);
	printf("The maximum value of long max is: %ld\n", LONG_MAX);
	
	//long long int
	printf("\nThe size of long long int is: %zu bytes / %zu bits\n", sizeof\
	 longLongInt, sizeof longLongInt * 8);
	printf("The minimum value of long long int is: %lld\n", LLONG_MIN);
	printf("The maximum value of long long max is: %lld\n", LLONG_MAX);
	
	//size_t
	printf("\nThe size of size_t is: %zu bytes / %zu bits\n", sizeof st, \
	sizeof st * 8);
	printf("The minimum value of size_t is: %zu\n", st);
	
	//register int. Used to count loops
	printf("\nThe size of register int is: %zu bytes / %zu bits\n", sizeof \
	rg, sizeof rg * 8);
	printf("The minimum value of register int is: %d\n", rg);
	
	return 0;
}
