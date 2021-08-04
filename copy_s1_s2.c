#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
gets(str1);
//gets(str2);
int i;
for(i=0;str1[i]!='\0';i++)
str2[i]=str1[i];
str2[i]='\0';

printf(" str2 %s\n",str2);
}
