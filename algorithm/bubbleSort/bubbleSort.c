#include <stdio.h>

void bubblesort(int a[], int n) {
  int aux;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n -1; j++) {
      if (a[j] > a[j+1]) {
        aux = a[j];
        a[j] = a[j+1];
        a[j+1] = aux;
      }
    }
  }
}

int main(void) {
  int data[] = {5, 3, 4, 8, 6};
  int size = sizeof(data) / sizeof(int); // size of data vector
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");

  bubblesort(data, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }

printf("\n");
  
  return 0;
}