#include <stdio.h>

int main(void) {

  typedef struct {
    int day, month, year;
  } date;
  int i = 1234;
  
  printf ("Size of date = %d\n", sizeof (date)); // d = integer
  printf("Size of i = %d\n", sizeof(i));
  printf ("Value of i = %d\n", i); 
  printf ("Address of i = %ld\n", (long int) &i); // ld = long integer
  printf ("Hexadecimal of i = %p\n", (void *) &i); // p = hexadecimal
  
  return 0;
}
