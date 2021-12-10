#include<iostream>
using namespace std;

void sortArr2(int arr2[])
{
    int i=0;
    while(arr2[i]>arr2[i+1])
    {
        int temp=arr2[i];
        arr2[i]=arr2[i+1];
        arr2[i+1]=temp;

        i++;
    }
}

void MergeSort(int arr1[],int arr2[2],int n1,int n2)
{
    int i=0;
    int j=0;
    int temp;

    while (i<n1)
    {
        if(arr1[i]>arr2[j])
        {
            temp=arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=temp;

            sortArr2(arr2);
        }
        i++;
    }
    cout<<"arr1[] = ";
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"arr2[] = ";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i]<<" ";
    }

}


int main()
{
    int arr1[]={1,3,5,7};
    int arr2[]={0,2,6,8,9};

    MergeSort(arr1,arr2,4,5);

    return 0;
}
