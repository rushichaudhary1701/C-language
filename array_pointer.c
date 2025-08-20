#include <stdio.h>

void main()
{
    int a[5],i,*p;
    p=&a[0];
    printf("\nEnter Array Elements");
    for(i=0;i<5;i++)
    {
        printf("\nEnter %d elements : ",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray Elements with their address");
    for(i=0;i<5;i++)
    {
        printf("\n%d is at %u",a[i],p++);
    }
}