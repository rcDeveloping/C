#include <stdio.h>  //standard library for input and output commands
#include <limits.h> //needed to get the max and min values of each data type
#include <stdint.h> //to ensure that the integer variable will have a certain number of bits
#include <stdlib.h> //needed to system ("pause") - only for windows os

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
	
	//long long unsigned int
	unsigned long long int longLongUInt;
	
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
	
	/***Outputs the size, max and min values of each data type***/
	// minimum value of int
	printf("The size of int : %d bytes / %d bits\n", sizeof i, sizeof i * 8);
	
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
	
	printf("The Maximum value of unsigned int is: %u\n", u);
	
	//unsigned int
	/***NOTE:
	For scanf, you need to use %hu since you're passing a pointer to an unsigned short. 
	For printf, it's impossible to pass an unsigned short due to default promotions 
	(it will be promoted to int or unsigned int depending on whether int has 
	at least as many value bits as unsigned short or not) so %d or %u is fine. 
	You're free to use %hu if you prefer, though.
	***/
	printf("\nThe size of unsigned int: %u bytes / %u bits\n",\
	sizeof i16, sizeof i16 * 8);
	printf("The Maximum value of unsigned int is: %u\n", i16);
		
	// short int
	printf("\nThe size of short int is: %zu bytes / %zu bits\n", sizeof \
	shortInt, sizeof shortInt * 8);
	printf("The Minimum value of short int is: %d\n", SHRT_MIN);
	printf("The Maximum value of short int is: %d\n", SHRT_MAX);
	
	//long int
	printf("\nThe size of long int is: %ld bytes / %ld bits\n", sizeof\
	 longInt, sizeof longInt * 8);
	printf("The minimum value of long int is: %ld\n", LONG_MIN);
	printf("The maximum value of long max is: %ld\n", LONG_MAX);
	
	//long long int
	printf("\nThe size of long long int is: %lld bytes / %llu bits\n", sizeof\
	 longLongInt, sizeof longLongInt * 8);
	printf("The minimum value of long long int is: %lld\n", LLONG_MIN);
	printf("The maximum value of long long max is: %lld\n", LLONG_MAX);
	
	//long long unsigned int
	printf("\nThe size of unsigned long long int is: %llu bytes / %llu bits\n", sizeof\
	 longLongUInt, sizeof longLongUInt * 8);
	printf("The minimum value of unsigned long long int is: 0\n");
	printf("The maximum value of unsigned long long int is: %llu\n", ULLONG_MAX);
	
	//size_t
	printf("\nThe size of size_t is: %zu bytes / %zu bits\n", sizeof st, \
	sizeof st * 8);
	printf("The minimum value of size_t is: %zu\n", st);
	
	//register int. Used to count loops
	printf("\nThe size of register int is: %zu bytes / %zu bits\n", sizeof \
	rg, sizeof rg * 8);
	printf("The minimum value of register int is: %d\n\n", rg);
	
	
	//system pause
	system("pause");
	
	//return of the main function
	return 0;
}
