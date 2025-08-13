#include <stdio.h>


void main()
{
    int a,b,c;

    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nEnter c : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("Max number is a");
        }
        else
        {
            printf("Max number is b");
        }
      
    }

    else
    {
        if(b>c)
        {
            printf("Max number is b");
        }

        else
        {
        printf("Max number is c");
        }
    }

}