#include <stdio.h>

void selectionSort(int a[], int n) {
        int greater, index;
        for (int i = n-1; i > 0; i--) {
                greater = a[0];
                index = 0;
                for (int j = 1; j <= i; j++) {
                        if (a[j] > greater) {
                                greater = a[j];
                                index = j;
                        }
                }
                a[index] = a[i];
                a[i] = greater;
        }
}

int main(void) {
        int data[] = {5, 1, 8, 3, 9, 2};
        int size = sizeof(data) / sizeof(int); // size of data vector
         for (int i = 0; i < size; i++) {
                 printf("%d ", data[i]);
  }
  printf("\n");

  selectionSort(data, size);

  for (int i = 0; i < size; i++) {
          printf("%d ", data[i]);
  }

printf("\n");
  
        return 0;
}