// merge sort
#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int l, int mid, int h)
{
    int b[100];
    int i = l, j = mid + 1, k = 1;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= h)
        b[k++] = a[j++];
    for (i = l; i <= h; i++)
        a[i] = b[i];
}
int mergesort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) + 1;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
int main()
{
    int a[15], n = 15, i;
    for (i = 0; i < n; i++)
        a[i] = (rand() % 99) + 1;
    printf("before sorting array is :\n");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);

    mergesort(a, 0, n - 1);
    printf("\n after sorting array is :\n");
    for (i = 0; i < n; i++)
        printf("%d", a[i]);
}

// binary search using recursive function