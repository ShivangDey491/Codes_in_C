#include<stdio.h>
void sort(int arr[],int n);
void main()
{
    int arr[10]={0,2,2,1,0,1,1,2,0,1};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,n);
}
void sort(int arr[],int n)
{
    int zero=0;
    int one=0;
    int two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(zero!=0)
        {
            arr[i]=0;
            zero--;
        }
        else if(one!=0)
        {
            arr[i]=1;
            one--;
        }
        else
        {
            arr[i]=2;
            two--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
