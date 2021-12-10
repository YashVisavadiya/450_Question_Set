#include<stdio.h>

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

void kthMaxMin(int *arr,int n,int k)
{
    sort(arr,n);
    printf("%d's Max Number is %d\n%d's Min Number is %d",k,*(arr+n-k),k,*(arr+k-1));
}

void main()
{
    int arr[]={5,8,4,6,2,7,1,10,3};
    int n=sizeof(arr)/sizeof(int);

    kthMaxMin(arr,n,1);
}
