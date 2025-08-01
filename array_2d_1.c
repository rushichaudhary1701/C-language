#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3],i,j;
    printf("\nEnter 2D Array : \n");

    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter %d row %d column : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    
    }

    

    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nA[%d][%d] : %d",i,j,a[i][j]);
            
        }
        
    
    }

    

    return 0;
}