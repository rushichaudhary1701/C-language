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
    printf("\nAddition : %d\n",a+b);
    printf("\n");
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

   
    printLine();
     return 0;
}