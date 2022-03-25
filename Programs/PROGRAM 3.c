/* WAP to initialize 2D character array
#include<stdio.h>
#include<conio.h>
void main()
{
   char s[3][10]={"java","c++","python"};//compile time initialization
   char s1[][10]={ {'j','a','v','a','\0'},{'c','+','+','\0'} };// compile time initialization
   int i;
   clrscr();
   //print string of array s;
   for(i=0;i<2;i++)
	printf("string %d : %s\n",i,s1[i]);
 //  printf("\n%c",s1[0][1]);
 //  printf("\n%c",s1[1][1]);
	for(i=0;i<3;i++)
      printf("2nd character is %c\n",s[i][1]);
   getch();
}