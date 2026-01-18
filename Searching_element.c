#include<stdio.h>
int search(int arr[], int n, int x) {
    // Code here
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            ind=i;
            break;
        }
        else
        {
            ind=-1;
        }
    }
    printf("The index of searched element:- %d",ind);
    return ind;
}
void main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    int x=4;
    search(arr,n,x);
}
