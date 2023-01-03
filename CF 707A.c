#include <stdio.h>
int main()
{
    char ch, ch1;
    int t, n, i,l=0, g = 0,h;
    scanf("%d%d", &t, &n);
    h=t*n;
    for (i = 0; i < h; i++)
    {
        scanf("%c", &ch1);
        scanf("%c", &ch);
        g=g+1;
        if(ch=='W')
            l=l+1;
        if(ch=='G')
            l=l+1;
        if(ch=='B')
            l=l+1;
    }
    if (l == h) 
    {
        printf("#Black&White");
    }
    else {
        printf("#Color");
    }
    return 0;
}
