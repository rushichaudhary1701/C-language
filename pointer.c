#include <stdio.h>

void main()
{
    int a,b,*p,*q;
    a=10;
    p=&a;
    b=20;
    q=&b;
    printf("\na : %d",a);
    printf("\np : %u",p);
    printf("\nb : %d",b);
    printf("\nq : %u",q);
}