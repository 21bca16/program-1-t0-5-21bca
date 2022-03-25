/* WAP to demonstrate the union.
*/
#include<stdio.h>
#include<conio.h>
union stud
{
   int id;
   char name[30];
}x;
struct student
{
   int id;
   char name[30];
}s;
void main()
{
   clrscr();
   printf("Difference 1: Based on memory allocation \n");
   printf("**************************************************************\n");
   printf(" Union member name \t memory address \n");
   printf("=====================================================\n");
   printf("id \t\t\t %u \nname \t\t\t %u",&x.id,x.name);
   printf("\n Structure member name \t memory address \n");
   printf("=====================================================\n");
   printf("id \t\t\t %u \nname \t\t\t %u",&s.id,s.name);
   printf("\n**************************************************************\n");
   printf(" Difference 2: Based on size \n");
   printf("**************************************************************\n");
   printf("\n Union size is %d",sizeof(x));
   printf("\n Structure size is %d",sizeof(s));
   printf("\n**************************************************************\n");
   printf("Difference 3: Based on access data member \n");
   printf("**************************************************************\n");
   x.id=10;
   strcpy(x.name,"om");
   printf("Union member value is %d \t %s\n",x.id,x.name);
   s.id=10;
   strcpy(s.name,"om");
   printf("Structure member value is %d \t %s\n",s.id,s.name);
   
	getch();
}