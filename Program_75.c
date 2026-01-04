// Program 75: Write your own version of strcmp().

#include <stdio.h>

/* User-defined strcmp function */
int mystrcmp(char s1[], char s2[])
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
        i++;
    }

    // When one string ends
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else if (s1[i] == '\0')
        return -1;
    else
        return 1;
}

int main()
{
    char a[] = "apple";
    char b[] = "apricot";

    int result = mystrcmp(a, b);

    printf("%d", result);
    return 0;
}
