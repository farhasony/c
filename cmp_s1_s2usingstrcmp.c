#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
gets(str1);
gets(str2);
int value;
value=strcmp(str1,str2);
if(value==0)
printf("strings equal\n");
else
printf("strings not equal\n");
}
