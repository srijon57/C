#include<stdio.h>
int main()
{
long int a,b,c;
scanf("%ld%ld",&a,&b);
c=a-b;
int d=c%10;
if(d==9)
    c=c-1;
else
    c=c+1;
printf("%ld", c);
return 0;
}
