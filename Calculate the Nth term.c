#include <stdio.h>
#include <string.h>
int fun(int n, int a, int b, int c)
{
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else if (n == 3)
    {
        return c;
    }
    else
    {
        n--;
        return fun(n,b,c,a+b+c);
    }
}
int main()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = fun(n, a, b, c);
    printf("%d", ans);
    return 0;
}
