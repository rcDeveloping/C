#include <stdio.h>
#include <stdbool.h>

int main(void) {
	
	bool b;

	printf("The size of 'bool' is: %lu\n bytes", sizeof b);
	
	b = false;
	printf("The value of 'b' is: %i\n", b);

	return 0;
}
