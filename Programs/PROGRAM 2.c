/* WAP to create array of string and print it.
#include<stdio.h>
#include<conio.h>
void main()
{
    char s[5][10]; //enter 5 string and each string contain 9 character.
    int i;
    clrscr();
    for(i=0;i<5;i++)
    {
       printf("\n Enter string s[%d]:",i);
       gets(s[i]);
    }
	for(i=0;i<5;i++)
       printf("\n strind %d : %s",i,s[i]);

    getch();
}