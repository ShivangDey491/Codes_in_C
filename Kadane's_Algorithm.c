#include<stdio.h>
int maxSubarraySum(int arr[], int n) {
    int current_sum = arr[0];
    int maximum_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (current_sum < 0)
            current_sum = arr[i];
        else
            current_sum += arr[i];

        if (current_sum > maximum_sum)
            maximum_sum = current_sum;
    }
    printf("The maximum sum in this array:- %d",maximum_sum);
    return maximum_sum;
}
void main()
{
    int arr[10]={1,-5,-8,6,7,8,-9,7,-1,1};
    int n=sizeof(arr)/sizeof(int);
    maxSubarraySum(arr,n);
}
