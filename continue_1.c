#include <stdio.h>
#include <conio.h>

int main()
{
    int i;

    for(i=0;i<10;i++)
    {
        if(i==5 || i==7)
        {
            continue;
        }

        else
        {
            printf("\nI : %d",i);
        }
        
    }


    return 0;
}