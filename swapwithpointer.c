#include <stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}

void main()
{
    int a,b;
    printf("\nEnter value : ");
    scanf("%d",&a);
    printf("\nEnter value : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("\na = %d",a);
    printf("\na = %d",b);

}