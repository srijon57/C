#include <stdio.h>
#include<stdlib.h>
int main() 
{
   int a,b,d,i,r1,c1,r2,c2;
   scanf("%d", &d);
   for (i = 0; i < d; i++)
   {
       scanf("%d%d%d%d", &r1,&c1,&r2,&c2);
       a=abs(r1-r2);
       b=abs(c1-c2);
       if(a==b)
        printf("Case %d: 1\n", i+1);
       else
       {
        if(a%2==b%2)
            printf("Case %d: 2\n", i+1);
        else
            printf("Case %d: impossible\n", i+1);
       }
   }
    return 0;
}
