#include <stdio.h>

// Binary search function
int binarySearch(int array[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int target;
    printf("enter your target :");
    scanf("%d", &target);

    int position = binarySearch(array, size, target);

    if (position != -1)
    {
        printf("Target %d found at index %d\n", target, position);
    }
    else
    {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}

