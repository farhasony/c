#include<stdio.h>
int main()
{
int num,msb,bits;
scanf("%d",&num);
if(num&1)
printf("lsb of %d is set\n",num);
else
printf("lsb of %d is not set\n",num);
bits=sizeof(int)*8;
msb=1<<(bits-1);
if(num&msb)
printf("msb of %d is set\n",num);
else
printf("msb of %d is not set\n",num);

}

