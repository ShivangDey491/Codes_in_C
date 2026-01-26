// User function Template for C
char* reverseString(char* s) {
    // Code Here
    int i=0;
    int j=strlen(s)-1;
    while(i<j)
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    return s;
}
