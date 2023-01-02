#include<stdio.h>
int main()
{
int x,y,z,a,b;
scanf("%d%d%d",&x,&y,&z);
if(x%z==0)
    a=(x/z);
else
    a=(x/z)+1;
if(y%z==0)
    b=(y/z);
else 
    b=(y/z)+1;
printf("%d\n",a*b);
return 0;
}
