#include<stdio.h>

void Sort(int *arr,int n)
{
    int j=0,count[3]={0};
    for(int i=0;i<n;i++)
    {
        if(*(arr+i)==0)
        {
            count[0]++;
        }
        else if(*(arr+i)==1)
        {
            count[1]++;
        }
        else
        {
            count[2]++;
        }
    }

    for(int i=0;i<count[0];i++)
    {
        if(count[0]!=0)
        {
            *(arr+j)=0;
            j++;
        }
    }
    for(int i=0;i<count[1];i++)
    {
        if(count[1]!=0)
        {
            *(arr+j)=1;
            j++;
        }
    }
    for(int i=0;i<count[2];i++)
    {
        if(count[2]!=0)
        {
            *(arr+j)=2;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void main()
{
    int arr[]={0,0,1,2,0,1,2,2,1,0,1,2,0,2};
    int n=sizeof(arr)/sizeof(int);

    Sort(arr,n);
}
