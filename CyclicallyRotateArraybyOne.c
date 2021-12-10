#include<stdio.h>

void cyclicallyRotate(int *arr,int n)
{
    int temp,store;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            temp=*(arr+i+1);
            *(arr+i+1)=*(arr+i);
        }
        else if(i==n-1)
        {
            *(arr)=temp;
        }
        else
        {
            store=*(arr+i+1);
            *(arr+i+1)=temp;
            temp=store;
        }
    }
    print(arr,n);
}

void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void main()
{
    int arr[]={5,2,1,4,7,8,6,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    cyclicallyRotate(arr,n);
}
