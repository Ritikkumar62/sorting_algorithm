#include <stdio.h>

void bubble_short(int n, int arr[])
{
    int temp, j;

    if (n >= 1)
    {
        j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                j = 1;
            }
        }
        if (j == 0)
        {
            return;
        }
        else
        {
            bubble_short(n - 1, arr);
        }

    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_short(n, arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}
