#include <stdio.h>

void selection_short1(int arr[], int n)
{
    int max = 0, ind = 0, temp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (max < arr[j])
            {
                max = arr[j];
                ind = j;
            }
        }
        temp = arr[i];
        arr[i] = max;
        arr[ind] = temp;
        max = 0;
    }
}

void selection_short2(int arr[], int n)
{
    int index_of_min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        index_of_min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[index_of_min])
            {
                index_of_min = j;
            }
        }
        temp = arr[index_of_min];
        arr[index_of_min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {7,3,67,247,85,245.7,44,25,7,6,1};
    int n = sizeof(arr) / sizeof(int);
    selection_short1(arr, n);
    selection_short2(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
