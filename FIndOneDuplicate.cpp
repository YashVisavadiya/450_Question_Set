#include<iostream>
#include<algorithm>
using namespace std;

int FindDuplicate(int arr[],int n)
{
    sort(arr, arr + n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[]={3,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<FindDuplicate(arr,n)<<endl;

    return 0;
}
