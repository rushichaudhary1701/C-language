#include <stdio.h>

struct Address
{
    char city[50];
    int zip;
};

struct Student
{
    char sname[50];
    int rno;
    struct Address a;
    
};


void main()
{
    struct Student s;
    printf("\nEnter student name : ");
    scanf("%s",s.sname);
    printf("\nEnter Roll no : ");
    scanf("%d",&s.rno);
    printf("\nEnter city : ");
    scanf("%s",s.a.city);
    printf("\nEnter zip : ");
    scanf("%d",&s.a.zip);

    printf("\nStudent name : %s",s.sname);
    printf("\nRoll no : %d",s.rno);
    printf("\nCity : %s",s.a.city);
    printf("\nZip : %d",s.a.zip);

}
