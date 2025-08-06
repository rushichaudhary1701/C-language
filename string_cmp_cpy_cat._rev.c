#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50],s3[50];
    int x;

    printf("\nEnter String 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';  // Remove trailing newline

    printf("\nEnter String 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';  // Remove trailing newline

    x = strcmp(s1, s2);
    printf("\nX: %d", x);

    if (x == 0)
    {
        printf("\nBoth strings are equal");
    }
    else
    {
        printf("\nBoth strings are not equal");
    }

    strcat(s2,s1);
    printf("\nAfter concat string 2 is %s: ",s2);

    strcpy(s3,s1);
    printf("\nAfter copy string 3 is %s",s3);

    strrev(s1);
    printf("\nAfter reverse s1 is %s",s1);


    return 0;
}
