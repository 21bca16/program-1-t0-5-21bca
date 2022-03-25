/* WAP to enter 5 string and search any string among them

  input : om , sai, ram, radha, kishan
  seach string: ram
  fram is available into array.
#include<stdio.h>
#include<conio.h>
void main()
{
   char s[5][10],f[10];
   int i,flag=0;  //flag variable assume value cannot be available in array
   clrscr();
   for(i=0;i<5;i++)
   {
      printf("\nEnter string %d",i);
      gets(s[i]);
   }
   clrscr();
   for(i=0;i<5;i++)
      printf("%s\n",s[i]);
	  printf("\n\n\t Enter string which you want to search:");
   gets(f);
   for(i=0;i<5;i++)
   {
      if(strcmp(s[i],f)==0)  //match f with each string of array s
      {
	 // printf("\n string is available...!!!");
	 flag=1;
	 break;
      }
   }
   if(flag==0)
	  printf("\n String is not avialbale...!!!");
   else
	  printf("\n String is available....!!!");
   getch();
}