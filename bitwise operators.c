#include <stdio.h>
int main()
{
    int a,b,c,x,y,z,k,l=0,m=0,n,i,j,q=0,and=0,or=0,xor=0;
    scanf("%d %d", &n,&k);
    for (i=1;i < n; i++)
    {
        for (j=i+1; j <= n ; j++)
        {
            x=i&j;
            a=x;

            if(a<k&&a>=l)
            {
                and=a;
                l=x;
            }

            y=i|j;

            b=y;
            if(b<k&&b>=m)
            {
                or=b;
                m=y;
            }
            z=i^j;

            c=z;
            if(c<k&&c>=q)
            {
                xor=c;
                q=z;
            }
        }

    }
    printf("%d\n%d\n%d", and,or,xor);
    return 0;
}
