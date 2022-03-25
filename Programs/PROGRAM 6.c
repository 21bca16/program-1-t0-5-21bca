/* WAP to enter 5 string and print it in ascending order (sorting)
   input:
	   x
	   y
	   a
	   c
	   b
   Output:
	   a
	   b
	   c
	   x
	   y

#include<stdio.h>
#include<conio.h>
void main()
{
     char s[5][10],t[10];
     int i,j;
     clrscr();
     /* input string */
     for(i=0;i<5;i++)
     {
	 printf("\n Enter string %d",i);
	 scanf("%s",s[i]);
//	 gets(s);
     }
     for(i=0;i<5;i++)
     {
	 for(j=i+1;j<5;j++)
	 {
	    if(strcmp(s[i],s[j])<0)
	    {
	    /*   t=s[i];
	       s[i]=s[j];
	       s[j]=t; */
	       strcpy(t,s[i]);
	       strcpy(s[i],s[j]);
	       strcpy(s[j],t);
	    }
	 }
     }

     for(i=0;i<5;i++)
	 printf("\n%s",s[i]);
     getch();
}