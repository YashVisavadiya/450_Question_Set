#include<iostream>
#include<limits.h>
using namespace std;

/*
void kaden(int arr[],int n)
{
    int maxsum=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
            sum=0;
    }
    cout<<maxsum<<endl;
}
*/

void kaden(int arr[],int n)
{
    int maxsum=INT_MIN,sum=0,start=0,end=0,begin=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<arr[i])
        {
            sum=arr[i];
            begin=i;
        }
        if(maxsum<sum)
        {
            maxsum=sum;
            start=begin;
            end=i;
        }
    }
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Max Sub-array Sum is "<<maxsum<<endl;
}

int main()
{
    int arr[]={-2,-3,4,-2,3,-1,2,-7,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    kaden(arr,n);

    return 0;
}
