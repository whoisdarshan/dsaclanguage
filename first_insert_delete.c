#include <stdio.h>

#define n 5
int a[n];
int top = -1, i;

int display() {
    if (top < 0) {
        printf("\nArray is empty .....");
    } else {
        for (i = 0; i <= top; i++) {
            printf("  %d", a[i]);
        }
    }
}

int firstInsert(int value) {
    if (top >= n - 1) {
        printf("\n Array is full :");
    } else {
        for (int i = top; i >= 0; i--) {
            a[i + 1] = a[i];
        }
        a[0] = value;
        top++;
    }
}

int firstDelete() {
    int x;
    if (top < 0) {
        printf("\n Array is already empty :");
    } else {
        x = a[0];
        for (int i = 0; i < top; i++) {
            a[i] = a[i + 1];
        }
        top--;
        return x;
    }
}

int insertEnd(int val) {
    if (top >= n - 1) {
        printf("\n Array is full :");
    } else {
        top++;
        a[top] = val;
    }
}

int delete() {
    int x;
    if (top < 0) {
        printf("Array is already empty :");
    } else {
        x = a[top];
        top--;
        return x;
    }
}

int main() {
    int choice, value;
    printf("\n1. Display");
        printf("\n2. Insert first");
        printf("\n3. first delete ");
        printf("\n4. Insert end");
        printf("\n5. Delete end");
        printf("\n6. Exit");

    do {
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display();
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                firstInsert(value);
                break;
            case 3:
                firstDelete();
                break;
            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertEnd(value);
                break;
            case 5:
                delete();
                break;
            case 6:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.");
        }
    } while (choice != 6);

    return 0;
}
