#include <stdio.h>
int main() 
{
    int a,b,d=0;
    scanf("%d%d", &a,&b);
    if (b%a!=0)
        printf("-1\n");
    if(b%a==0)
    {
        b=b/a;
    for (;b!=1;)
    {    
       if(b%2==0)
       {    
           b=b/2;
           d=d+1;
       }    
       if(b%2!=0)
       {
            if(b%3==0)
            {
                b=b/3;
                d=d+1;
            }
       
       if(b%3!=0&&b!=1)
       {
        d=-1;
        break;
       }
   }
    }

    printf("%d", d);
    }
    return 0;
}
