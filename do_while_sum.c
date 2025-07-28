#include <stdio.h>
#include <conio.h>

int main()
{
    int n,sum=0;

    printf("\nEnter N : ");

    scanf("%d",&n);

    
    do
    {

        sum=sum+n;
        n--;

    }while(n>0);

    printf("Sum : %d",sum);


    
    return 0;
}