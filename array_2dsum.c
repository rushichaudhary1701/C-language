#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3],b[3][3],i,j,c[3][3];
    printf("\nEnter 2D Array A : \n");

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
    
    printf("\n");
    printf("\nEnter 2D Array B : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter %d row %d column :  ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nB[%d][%d] : %d",i,j,b[i][j]);
        }
    }

    printf("\n\n"); 

    printf("\n2D Array C\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j] + b[i][j];
          printf("\t%d",c[i][j]);
        }

        printf("\n");
    }
    
    /*Tabl eformat code 
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j] + b[i][j];
          printf("\nC[%d][%d] : %d",i,j,c[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          
          printf("\t%d,c[i][j]);
        }
    }
    */
    


    return 0;
}