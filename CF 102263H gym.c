#include<stdio.h>
int main()
{
    long int a=0,p,s;
    scanf("%ld %ld", &s,&p);
    for(;s>0;)
    {
        a=a+5;
        s=s-p;
    }
    if(a<10)
        printf("10");
    else
        printf("%ld", a);
    return 0;
}
