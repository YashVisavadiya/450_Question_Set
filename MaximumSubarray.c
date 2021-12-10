#include<stdio.h>
#include<limits.h>

void maxSubarray(int *arr,int n)
{
    int maxsum=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
            sum=0;
    }
    printf("MaxSubArray Sum %d ",maxsum);
}

int max(int a,int b)
{
    return (a>b ? a : b);
}

void main()
{
    int arr[]={-2,-3,-4,-2,-3,-1,-2,-7,-3,-2};
    int n=sizeof(arr)/sizeof(arr[0]);

    maxSubarray(arr,n);
}
