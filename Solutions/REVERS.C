#include<stdio.h>
#include<conio.h>
void main()
{
	int num,v,rev=0;
	clrscr();
	printf("\n Enter Values:");
	scanf("%D",&num);
	while(num!=0)
	{
		v=num%10;
		rev=rev*10+v;
		num=num/10;
	}
	printf("\n reverse number: %d ",rev);
	getch();
}
