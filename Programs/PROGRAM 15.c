/* WAP to demonstrate the nested structure

   Definition: When structure create inside another structure is known as  nested structure.

   When we create structure variable inside the another structure is also known as nested structure.

   There are two way to declare it

   Method 1 :  Declare one structure inside another

     struct <structure name>
     {

	 datatype variable;
	 .........
	 struct <structure name>
	 {

	    datatype variable;
	    ......
	 } variable;
     }variable;


   Method 2: declare one structure variable inside other structure

       struct <structure name>
       {

	    datatype variable;
	    ......
       };
       struct <structure name>
       {
	   datatype variable;
	   struct <structure name> variable;
       }variable;

*/

#include<stdio.h>
struct address
{
    char city[10];
    char pin[7];
};
struct stud
{
     int id;
     char name[20];
    struct address add; // nested structure
};
void main ()
{
    struct stud s;
    clrscr();
    printf("\nEnter student id:");
    scanf("%d",&s.id);
    printf("Enter student name:");
    flushall();
    scanf("%s",s.name);
    printf("\nEnter student city:");
    flushall();
   // printf("%s",&s.add.city);
    gets(s.add.city);
    printf("\nEnter student pin:");
    flushall();
    scanf("%s",s.add.pin);
    printf("\nPrinting the student information....\n");
    printf("\nID:%d\nName: %s\nCity: %s\nPincode: %s",s.id,s.name,s.add.city,s.add.pin);
    getch();
}
