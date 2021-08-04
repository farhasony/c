#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
gets(str1);
gets(str2);
int value;
value=compare(str1,str2);
if(value==0)
printf("strings equal\n");
else
printf("strings not equal\n");
}
int compare(char a[],char b[])
{
int flag=0,i=0;
while(a[i]!='\0'&&b[i]!='\0')
{
if(a[i]!=b[i])
{
flag=1;
break;
}
i++;
}
if(flag==0)
return 0;
else
return 1;
}


