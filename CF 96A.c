#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a = 0, b = 0,c=0, i;
    scanf("%s", s);
    for (i = 0; i <= strlen(s); i++)
    {
        if (s[i] == '1')
        {
            a++;
            b = 0;
        }
        if (s[i] == '0')
        {
            b++;
            a = 0;
        }
        if (a == 7 || b == 7)
            c=1;
    }
    if (c==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
