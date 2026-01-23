int majorityElement(int arr[], int n) {
    int count=0;
    int candidate=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            candidate=arr[i];
            count++;
        }
        else if(arr[i]==candidate)
        {
            count++;
        }
        else
        {
            count --;
        }
    }
    
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
    }
    
    if(count>n/2)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}
