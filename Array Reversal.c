#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d", &j);
    int n[1000];
    for (i = 0;i<j;i++)
    {
        scanf("%d", &n[i]);
    }
    for (i=j-1;i>=0;i--)
    {
        printf("%d ", n[i]);
    }
    return 0;
}
