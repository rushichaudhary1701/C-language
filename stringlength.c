#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{

    char s1[50];
    int l1,i,count=0;
    printf("\nEnter String : ");
    //scanf("%s",&s1); it will not include space and after that

    gets(s1);  //it will include space and after that

    //l1=strlen(s1);

    for(i=0;s1[i]!='\0';i++)
    {
        count ++;
    }//it can use even without string library
    
    printf("Length of String 1 is %d",count);
}