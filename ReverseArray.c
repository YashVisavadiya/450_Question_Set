#include<stdio.h>

void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(arr+i,arr+(n-i-1));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,n);
}
