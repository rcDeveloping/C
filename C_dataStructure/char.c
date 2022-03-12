#include <stdio.h>

int main(void) {
	
	char C;
	
	// lu is a short for long unsigned
	printf("The size of 'char' is: %lu bytes / %lu bits\n", sizeof C, sizeof C * 8);
	
	/*** 
	char can store values from 0 to 255 (2**8) 
	*/
	
	C = 10;
	printf("\nThe value of C is: %i\n", C);
	printf("The size of C is: %lu bytes\n", sizeof C);
	
	
	// By default char is signed
	C = 255;
	printf("\nThe value of C is: %i\n", C);
	
	// unsigned char
	unsigned char U;
	U = 255;
	printf("\nThe value of U is: %i\n", U);
	
	
	char a = 10;
	char h = 0xa;
	char ascii = '\n';
	printf("\na is: %i\n", a);
	printf("0xa in decimal is: %i\n", h);
	printf("\\n in ascii is: %i\n", ascii);
	
	//***-->>> char is used to store small numbers and letters from a text.<<<--***
	
	return 0;
}
