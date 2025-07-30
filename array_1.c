#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10],i;
    printf("\nEnter 10 elements of array : \n");

    for(i=0;i<10;i++)
    {
        printf("\nEnter A[%d] : ",i);
        scanf("%d",&a[i]);
        
    }

    printf("\nElements of array are : \n");
    for(i=0;i<10;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }


    return 0;
}