/* WAP to enter string and replace character from other character

   Input : abcaad

   Replace char : a

   Replace with : M

   Output: MbcMMd
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    char s[10],fs[10],rc,rw;
    int i;
    clrscr();
    printf("\nEnter any string :");
    gets(s);
    printf("\nEnter character which you want to replace:");
    flushall();
    scanf("%c",&rc);
    printf("\nEnter character with you want to replace:");
    flushall();
    scanf("%c",&rw);
    for(i=0;s[i]!='\0';i++)
    {
	if(s[i]==rc)
	//  s[i]=rw;  output will be store in input variable
	   fs[i]=rw;
	else
	   fs[i]=s[i];
    }
    fs[i]='\0';
    clrscr();
    printf("\n Input string :%s",s);
    printf("\n Replace character : %c",rc);
    printf("\n Replace with : %c",rw);
    printf("\n\n Output string is: %s",fs);
    getch();
}