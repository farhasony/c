#include<stdio.h>
int main()
{
int num,bitstatus,bitpoistion;
scanf("%d",&num);
scanf("%d",&bitpoistion);
bitstatus=(num>>bitpoistion)&1;
printf(" %d num of %d is set\n",num,bitpoistion);
//to get nth bit of a number
int mask=(1<<bitpoistion);
if(num&mask)
printf("bit poistion is 1");
else
printf("bit poistion is 0");

}

