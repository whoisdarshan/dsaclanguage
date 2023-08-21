#include <stdio.h>

int  rotate_array(int array[], int n) {
  int temp;
    temp = array[0];
    for (int j = 0; j < n; j++) {
      array[j] = array[j+1];
    }
    array[n-1] = temp;
}

int main() {
  int array[100];
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  rotate_array(array, n);

  printf("The rotated array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}