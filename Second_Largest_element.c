#include<stdio.h>
void sc_largest(int arr[],int n);
void main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    sc_largest(arr,n);
}
void sc_largest(int arr[],int n)
{
    int max1=-1;
    int max2=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]!=max1)
        {
            max2=arr[i];
        }
    }
    printf("The second largest element:- %d",max2);
}
