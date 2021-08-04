#include<stdio.h>
#include<string.h>
int main()
{
char str1[100];
int i,alpha,num,specialchar,count=0;
alpha=num=specialchar=0;
gets(str1);
while(str1[i]!='\0')
{
if((str1[i]>='a'&&str1[i]<='z')||(str1[i]>='A'&&str1[i]<='Z')){
++alpha;
}
else if(str1[i]>='0'&&str1[i]<='9'){
num=num+1;
}
else
{
++specialchar;
}
i++;
}
count=alpha+num+specialchar;
printf("%d\n",count);
}
