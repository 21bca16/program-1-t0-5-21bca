/* WAP to enter string and print it
#include<stdio.h>
#include<conio.h>
void main()
{
char s[10]; // to take input of string
	clrscr();
	printf("\nEnter any string:");
	//scanf("%s",&s);
    //gets(s);
    scanf("%[^\n]",s);
    printf("\n\nYou enter string %s",s);
    printf("\n\nYou enter string \"%s\"",s);
    getch();
}