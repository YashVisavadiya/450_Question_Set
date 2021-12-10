#include<stdio.h>

void moveNegative(int *arr,int n)
{
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                swap((arr+j),(arr+j+1));
            }
        }
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
    int arr[]={-5,0,-1,-4,3,-2,1,6,4,-3};
    int n=sizeof(arr)/sizeof(int);

    moveNegative(arr,n);
}
