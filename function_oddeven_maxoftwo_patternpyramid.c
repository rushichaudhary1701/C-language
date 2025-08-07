#include <stdio.h>

void oddeven(int i)
{

   

    if(i%2==0)
    {
        printf("This is even number ");
    }

    else
    {
        printf("This is odd number");
    }
}

void maxoftwo(int x,int y)
{
    if(x>y)
    {
        printf("Max number is %d",x);
    }
    else
    {
        printf("Max number is %d",y);
    }
}

void pattern(int n)
{
    int i,j,k;


    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" *");
    
        }

        printf("\n");
    }


}

void main()
{
    int a,b,c,row;
    printf("\nEnter number a : ");
    scanf("%d",&a);
    oddeven(a);

    printf("\nEnter number b : ");
    scanf("%d",&b);
    printf("\nEnter number c : ");
    scanf("%d",&c);

    maxoftwo(b,c);

    printf("\nEnter row : ");
    scanf("%d",&row);
    pattern(row);


}