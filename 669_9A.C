#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char s1[100], s2[100] ;
int i;
clrscr();
printf("\nEnter ypur string for upper case\n");
gets(s1);
for(i=0;s1[i]!='\o';i++)
{
	if (s1[i]>='a'&& s1[i]<='z')
	{
		s1[i]=s1[i]-32;
	}
}
printf("converted upper case=%s",s1);
printf("\nEnter your string for lower case\n");
gets(s2);
for(i=0;s2[i]!='\o';i++)
{
	if(s2[i]>='A'&& s2[i]<='Z')
	{
		s2[i]=s2[i]+32;
	}
 }
printf("conveted upper case=%s",s2);
getch();
}
