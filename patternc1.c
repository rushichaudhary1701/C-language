#include <stdio.h>

void main()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }

        for(j=0;j<9-i;j++)
        {
            printf("*");
        }

        printf("\n");
    }

}