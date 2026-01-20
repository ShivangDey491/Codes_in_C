#include<stdio.h>
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArr(int arr[], int n, int d) {
    d = d % n;   // handle d > n

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int d=2;
    rotateArr(arr,n,d);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
