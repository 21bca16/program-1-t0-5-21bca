#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,rev=0,j;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&no);
	while(no!=0)
	{
		j=no%10;
		rev=rev*10*j;
		no=no/10;
	}
	if(no==rev)
	{
		printf("\n %d is polindrom number",j);
	}
	else
	{
	printf("\n %d is not polindrom number",j);
	}
	getch();
}



