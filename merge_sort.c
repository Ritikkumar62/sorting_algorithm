#include <stdio.h>
#include <stdlib.h>

void merge(int arr1[], int l, int m, int h)
{
    int i = l, j = m + 1, k = l;
    int *ptr = (int *)malloc(sizeof(int) * (h+1));
    while (i <= m && j <= h)
    {
        if (arr1[i] < arr1[j])
        {
            ptr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            ptr[k] = arr1[j];
            j++;
            k++;
        }
    }
    while (j <= h)
    {
        ptr[k] = arr1[j];
        j++;
        k++;
    }

    while (i <= m)
    {
        ptr[k] = arr1[i];
        i++;
        k++;
    }

    for (int i = l; i <= h; i++)
    {
        arr1[i] = ptr[i];
    }

    free(ptr);
}

void merge_sort(int arr1[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        merge_sort(arr1, l, m);
        merge_sort(arr1, m + 1, h);
        merge(arr1, l, m, h);
    }
}

int main()
{
    int arr1[] = {2, 4, 6, 3, 6, 2, 0, 96, 3, 2};
    int n = sizeof(arr1) / sizeof(int);
    merge_sort(arr1, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}
