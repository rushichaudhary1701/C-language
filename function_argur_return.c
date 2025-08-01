#include <stdio.h>
#include <conio.h>

void printLine()
{
    int i;
    for(i=0;i<40;i++)
    {
        printf("*");
    }
    printf("\n");
}

void add(int a,int b)
{
    printf("\nAddition : %d",a+b);
    printf("\n");
}

int sub(int a,int b)
{
    return a-b;
}

int main()
{
    int x,y;
    printLine();
    
    printf("\nEnter Value : ");
    scanf("%d",&x);

    printf("\nEnter Value : ");
    scanf("%d",&y);

    add(x,y);

    printf("\nSubstraction : %d\n\n",sub(x,y));

    /*Aother Method
    declare variable int sum and store ans=sub(x,y)
    print ans 
    */

    
    printLine();
     return 0;
}