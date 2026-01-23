int missingNum(int *arr, int size) {
    int sum1=0 ,sum2=0, x=0;
    for(int i=0;i<size;i++)
    {
        sum1+=arr[i];
    }
    for(int j=1;j<=size+1;j++)
    {
        sum2+=j;
    }
    x=sum2-sum1;
    return x;
}

//second method
int missingNumber(int arr[], int n) {
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= n; i++) {
        xor1 ^= i;
    }

    for (int i = 0; i < n - 1; i++) {
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}
