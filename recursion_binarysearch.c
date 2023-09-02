#include <stdio.h>
int recursiveBinarySearch(int array[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = low + high  / 2;

        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] < target)
        {
            return recursiveBinarySearch(array, mid + 1, high, target);
        }
        else
        {
            return recursiveBinarySearch(array, low, mid - 1, target);
        }
    }
    return -1;
}
int main()
{
    int array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int target;
    printf("Enter your target: ");
    scanf("%d", &target);

    int position = recursiveBinarySearch(array, 0, size - 1, target);

    if (position == -1)
    {
      
         printf("Target %d not found in the array\n", target);
    }
    else
    {
         printf("Target %d found at index %d\n", target, position);
    }

    return 0;
}