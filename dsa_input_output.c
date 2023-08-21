#include <stdio.h>

int main() {
    int numbers[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    int temp = numbers[0]; 
    for (int i = 0; i < 4; i++) 
    {
        numbers[i] = numbers[i + 1]; 
    }
    numbers[4] = temp; 

    printf("Output: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    
}