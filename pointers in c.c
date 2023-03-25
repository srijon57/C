#include <stdio.h>

void update(int *a,int *b) 
{
    unsigned int alu=*a,begun=*b;
    *a=alu+begun;
    *b=(alu-beguun);
    if (*b<1)
    {
        *b=-*b;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
