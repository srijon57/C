#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,sum;
    scanf("%d", &a);
    b=a/10000;
    c=(a%10000)/1000;
    d=((a%10000)%1000)/100;
    e=(((a%10000)%1000)%100)/10;
    f=(((a%10000)%1000)%100)%10;
    sum=b+c+d+e+f;
    printf("%d", sum);
    return 0;
}
