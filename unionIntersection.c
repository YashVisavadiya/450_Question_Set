#include<stdio.h>

void unionIntercetion(int *arr1, int *arr2, int n1, int n2)
{
    int all[100],intersection[100];

    for(int i=0;i<100;i++)
    {
        all[i]=0;
        intersection[i]=0;
    }

    for(int i=0;i<n1;i++)
    {
        all[*(arr1+i)]++;
    }

    for(int j=0;j<n2;j++)
    {
        all[*(arr2+j)]++;
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(*(arr1+i)==*(arr2+j))
            {
                intersection[*(arr1+i)]++;
            }
        }
    }
    print(arr1,arr2,n1,n2,all,intersection);
}

void print(int *arr1, int *arr2, int n1, int n2,int *all,int *intersection)
{
    printf("Union : ");
    for(int i=0;i<100;i++)
    {
        if(*(all+i)!=0)
        {
            printf("%d ",i);
        }
    }

    printf("\nIntersection : ");
    for(int i=0;i<100;i++)
    {
        if(*(intersection+i)!=0)
        {
            printf("%d ",i);
        }
    }
}

void main()
{
    int arr1[]={11,16,14,4,1,7,10,65,20,13};
    int arr2[]={5,2,1,4,7,8,6,3,9};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);

    unionIntercetion(arr1,arr2,n1,n2);

}
