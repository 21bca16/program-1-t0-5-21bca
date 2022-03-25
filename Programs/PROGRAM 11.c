/* WAP to create structure marksheet(sid,sname,sub1,sub2,sub3,total,per). and print it.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   struct marksheet
   {
       int sid,sub1,sub2,sub3,total,per;
       char name[30];
   };
   struct marksheet m;
   clrscr();
   printf("\nEnter student id:");
   scanf("%d",&m.sid);
   printf("\nEnter studnet name:");
   scanf("%s",m.sname);
   printf("\nEnter marks of subject1:");
   scanf("%d",&m.sub1);
   printf("\nEnter marks of subject2:");
   scanf("%d",&m.sub2);
   printf("\nEnter marks of subject3:");
   scanf("%d",&m.sub3);
   m.total=m.sub1+m.sub2+m.sub3;
   m.per=m.total/3;
   clrscr();
   printf("\n\n Student ID: %d",m.sid);
   printf("\n Student Name: %s",m.sname);
   printf("\n===============================================\n");
   printf("\n C \t\t DBMS \t\t OS \t Total \t Percentage\n=======================================\n");
   printf("%d\t\t%d\t\t%d\t%d\t%d",m.sub1,m.sub2,m.sub3,m.total,m.per);
   printf("\n===============================================\n");
   getch();
}
