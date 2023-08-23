#include <stdio.h>

void bubble_sort_ascending(int array[], int n)
 {
    int a;
    for (int i = 0; i < n ; i++) 
    {
        for (int j = 0; j < n -  1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
               
               a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90,76};
    int n  = 8;
    
    bubble_sort_ascending(array, n);
    
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
