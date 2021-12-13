#include<iostream>
using namespace std;

int main()
{
    int arr[4][2]={{1,3},{2,6},{8,10},{15,20}};

    int j=0,count[4]={0};
    for(int i=0;i<3;i++)
    {
        if(arr[i][1]>arr[i+1][0])
        {
            arr[i+1][0]=arr[i][0];
            count[j]=1;
            j++;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(count[i]!=1)
        {
            printf("{ ");
            for(int j=0;j<2;j++)
            {
                if(j==0)
                {
                    printf(" %d ,",arr[i][j]);
                }
                else
                {
                    printf(" %d ",arr[i][j]);
                }
            }
            printf(" } \n");
        }
    }
    return 0;
}
