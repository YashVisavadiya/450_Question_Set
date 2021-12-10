#include <iostream>
using namespace std;

int minJumps(int arr[],int n)
{
    int i=0,count=0;
    while(i<n)
    {
        if(arr[i]==0)
        {
            return -1;
        }
        i+=arr[i];
        count++;
    }
    return count;
}

int main()
{
    int arr[] ={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << minJumps(arr, n-1) << endl;

    return 0;
}
