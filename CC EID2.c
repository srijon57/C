#include <stdio.h>

int main() 
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a1,a2,a3,c1,c2,c3,d=0;
        scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&c1,&c2,&c3);
        if((a1>a2)&&(c1<=c2)||(a1<a2)&&(c1>=c2)||(a1==a2)&&(c1!=c2))
         d=1;
        else if((a1>a3)&&(c1<=c3)||(a1<a3)&&(c1>=c3)||(a1==a3)&&(c1!=c3))
         d=1;
        else if((a2>a3)&&(c2<=c3)||(a2<a3)&&(c2>=c3)||(a2==a3)&&(c2!=c3))
         d=1;
        if(d==1)
         printf("NOT FAIR\n");
        else
         printf("FAIR\n");
    }
    return 0;
}
