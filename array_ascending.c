#include <stdio.h>
#include <conio.h>

int main()
{
    int a[5],i;
    printf("\nEnter 10 elements of array : \n");

    for(i=0;i<5;i++)
    {
        printf("\nEnter A[%d] : ",i);
        scanf("%d",&a[i]);
        
    }

    printf("\nElements of array are : \n");
    for(i=0;i<5;i++)
    {
        printf("\nA[%d] : %d",i,a[i]);
    }

    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nElements of array in ascending order are : \n");
    for(i=0;i<5;i++)    
    {
        printf("\nA[%d] : %d",i,a[i]);
    }


    return 0;
}