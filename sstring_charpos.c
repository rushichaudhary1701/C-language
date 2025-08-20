#include <stdio.h>

void main()
{
    char s1[50];
    char c;
    int i;
    printf("\nEnter String : ");
    gets(s1);
    printf("\nEnter character to find : ");
    scanf("%c",&c);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==c)
        {
            printf("\nGiven character %c is at Index %d",c,i);
            
        }
    }
}