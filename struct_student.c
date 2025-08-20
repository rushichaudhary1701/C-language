    #include <stdio.h>

    struct Student
    {
        int rno,s1,s2,s3,total;
        double per;
        char sname[50];

        
    };

    void main()
    {
        struct Student s;
        printf("\nEnter name of the student : ");
        gets(s.sname);
        printf("\nEnter Roll no : ");
        scanf("%d",&s.rno);
        printf("\nEnter Marks of subject 1 : ");
        scanf("%d",&s.s1);
        printf("\nEnter Marks of subject 2 : ");
        scanf("%d",&s.s2);
        printf("\nEnter Marks of subject 3 : ");
        scanf("%d",&s.s3);
        s.total = s.s1 + s.s2 + s.s3;
        s.per = s.total / 3.0;

        printf("\nStudent name : %s",s.sname);
        printf("\nRoll no : %d",s.rno);
        printf("\nTotal : %d",s.total);
        printf("\nPercentage : %lf",s.per);
        
        

         if (s.per >= 75)
         {
             printf("\nDistinction");
         }
         else if (s.per >= 60)
         {
             printf("\nFirst Class");
         }
         else if (s.per >= 50)
         {
             printf("\nSecond Class");
         }
         else if (s.per >= 40)
         {
             printf("\nThird Class");
         }
        else
        {
             printf("\nFail");
        }
    }