#include <stdio.h>
#include <conio.h>

int main()
{
    int a=0,b=0,c=0,d=0,result;

    result=a++ + ++b + --c + d-- + ++a + d--;

    printf("\na : %d",a);
    printf("\nb : %d",b);
    printf("\nc : %d",c);
    printf("\nd : %d",d);

    printf("\nResult : %d",result);

    return 0;
}