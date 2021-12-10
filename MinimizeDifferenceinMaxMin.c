#include <stdio.h>
#include <limits.h>

void minimizeDifference(int arr[], int n, int k)
{

    int min = 9999999;
    int max = -9999999;

    for (int i = 0; i < n; i++)
    {
        min = FindMin(min, arr[i]);
        max = FindMax(max, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min || (arr[i] - k <= min + k))
        {   
            arr[i] += k;
            
        }
        else if (arr[i] - k > min + k)
        {
            arr[i] -= k;
        }
        printf("%d ", arr[i]);
    }
    min = 9999999;
    max = -9999999;
    for (int i = 0; i < n; i++)
    {
        min = FindMin(min, arr[i]);
        max = FindMax(max, arr[i]);
    }

    printf("\nMinimized Difference Between Max and Min is %d", (max - min));
}

int FindMin(int a, int b)
{
    return (a < b ? a : b);
}

int FindMax(int a, int b)
{
    return (a > b ? a : b);
}

void main()
{
    int arr[] = {3,9,12,16,20};

    minimizeDifference(arr, 5, 3);
}
