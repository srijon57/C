#include <stdio.h>
int main() 
{
   int a,c,i,u,j,t=0;
   scanf("%d", &a);
   for (i = 0; i < a; i++)
   {
       scanf("%d", &u);
       for (j = 0; j < u; j++)
       {
           scanf("%d", &c);
           if (c<0)
            c=0;
        
            t=t+c;
       }
       printf("Case %d: %d\n",i+1,t);
       t=0;
   }
    return 0;
}
