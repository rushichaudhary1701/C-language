    #include <stdio.h>

    struct Student
    {
        int rno,s1,s2,s3,total;
        double per;
        char sname[50];

        
    };

    void main()
    {
        struct Student s[3];
        int i;
      
        for(i=0;i<3;i++)
        {

        fflush(stdin);    
        printf("\nEnter name of the student : ");
        scanf("%s",s[i].sname);
        printf("\nEnter Roll no : ");
        scanf("%d",&s[i].rno);
        printf("\nEnter Marks of subject 1 : ");
        scanf("%d",&s[i].s1);
        printf("\nEnter Marks of subject 2 : ");
        scanf("%d",&s[i].s2);
        printf("\nEnter Marks of subject 3 : ");
        scanf("%d",&s[i].s3);
        s[i].total = s[i].s1 + s[i].s2 + s[i].s3;
        s[i].per = s[i].total / 3.0;

        printf("\nStudent name : %s",s[i].sname);
        printf("\nRoll no : %d",s[i].rno);
        printf("\nTotal : %d",s[i].total);
        printf("\nPercentage : %lf",s[i].per);
        
        

         if (s[i].per >= 75)
         {
             printf("\nDistinction");
         }
         else if (s[i].per >= 60)
         {
             printf("\nFirst Class");
         }
         else if (s[i].per >= 50)
         {
             printf("\nSecond Class");
         }
         else if (s[i].per >= 40)
         {
             printf("\nThird Class");
         }
        else
        {
             printf("\nFail");
        }
        
        }
    }