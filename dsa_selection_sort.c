#include <stdio.h>

void bubble_sort_ascending(int array[], int n)
 {
    int a;
    for (int i = 0; i < n ; i++) 
    {
        for (int j = i+1; j < n ; j++) 
        {
            if (array[i] > array[j ]) 
            {
               
               a = array[i];
                array[i] = array[j ];
                array[j ] = a;
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
