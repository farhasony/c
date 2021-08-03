#include<stdio.h>
int reverse(int n);
int main()
{
int n,rem;
scanf("%d",&n);
rem=reverse(n);
printf("%d",rem);

}
int reverse(int n){
static int rem=0;
if(n==0)
return 0;
else{
rem=rem*10;
rem=rem+n%10;

reverse(n/10);
return rem;
}
}
