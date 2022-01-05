#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&a);
	for(b=2;b<=a/2;b++)
	{
		if(a%b==0);
		{
			c=1;
			break;
		}

	}
	if(c==0)
			printf("\n %d is prime  number",a);
		else
			printf("\n %d is not prime number",a);
		getch();
}