/* WAP to create structure student(sid,sname) enter 5 student details
   and print it using array of structure
*/
#include<stdio.h>
#include<conio.h>
struct student
{
    int sid;
    char sname[30];
};
void main()
{
    struct student s[5];   //array of structure
    int a[5];
    int i,id;
    clrscr();
    //Input 5 student details
    for(i=0;i<5;i++)
    {
	printf("\n Enter studnet id for student %d:",i+1);
	scanf("%d",&s[i].sid);
	printf("\n Enter student sname for student %d:",i+1);
	scanf("%s",s[i].sname);
    }
    //Print 5 student details
    clrscr();
    for(i=0;i<5;i++)
       printf("\n\n%d\t%s",s[i].sid,s[i].sname);

    //Search perticular record
    printf("\n\n\t\tEnter student id which you want to search?:");
    scanf("%d",&id);
    for(i=0;i<5;i++)  // loop execute for each record
    {
       if(s[i].sid==id)
	  printf("\n\n%d \t %s",s[i].sid,s[i].sname);
    }
	getch();
}