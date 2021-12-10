#include<stdio.h>
#include<limits.h>
#include<math.h>
void MaxMin(int *arr,int n)
{
    int maximum=INT_MIN,minimum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,*(arr+i));
        minimum=min(minimum,*(arr+i));
    }
    printf("Max Number is %d \nMin Number is %d ",maximum,minimum);
}
int max(int a,int b)
{
    return (a>b ? a : b);
}

int min(int a,int b)
{
    return (a<b ? a : b);
}

void main()
{
    int arr[]={5,2,11,6,18,20,4};
    int n=sizeof(arr)/sizeof(int);
    MaxMin(arr,n);
}
