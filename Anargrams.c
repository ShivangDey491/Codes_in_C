#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return false;

    int count[256] = {0};  

    for (int i = 0; i < len1; i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (areAnagrams(s1, s2))
        printf("The strings are Anagrams.\n");
    else
        printf("The strings are NOT Anagrams.\n");

    return 0;
}
