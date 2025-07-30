#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <windows.h>

#include <windows.h>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    int a,b,ans,choice;

    sleep(1);
    setColor(7);
    printf("\n**************************************\n");
    setColor(4);
    printf("\nEnter A : ");
    scanf("%d",&a);
    setColor(1);
    printf("\nEnter B : ");
    scanf("%d",&b);
    setColor(7);
    printf("\n**************************************\n");
    sleep(1);
    setColor(2);
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division\n");

    sleep(1);
    setColor(7);
    printf("\n**************************************\n");
    setColor(6);
    printf("\nEnter your choice : ");
    scanf("%d",&choice);

    sleep(1);
    setColor(7);
    printf("\n**************************************\n");

    switch (choice)
    {
    case 1:
        ans = a+b;
        setColor(5);
        printf("\nAddition : %d",ans);
        break;

    case 2:
        ans = a-b;
        setColor(5);
        printf("\nSubstraction : %d",ans);
        break;
      
    case 3:
        ans = a*b;
        setColor(5);
        printf("\nMultiplication : %d",ans);
        break;
        
    case 4:
        ans = a/b;
        setColor(5);
        printf("\nDivision : %d",ans);
        break;  

    default:
        setColor(5);
        printf("\nInvalid Choice");
        break;
    }

    return 0;
}