#include<stdio.h>
int largest(int arr[], int n) {
    // Code Here
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max <arr[i])
        {
            max=arr[i];
        }
    }
    printf("The largest element is :- %d",max);
    return max;
}
void main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    largest(arr,n);
}
