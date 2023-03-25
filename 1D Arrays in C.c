#include <stdio.h>
int main()
{
    int i,j,s=0;
    scanf("%d", &j);
    int n[1000];
    for (i = 0;i<j;i++)
    {
        scanf("%d", &n[i]);
    }
    for (i=0;i<j;i++)
    {
        s=s+n[i];
    }
    printf("%d", s);

    return 0;
}
