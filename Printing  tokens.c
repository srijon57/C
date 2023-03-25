#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int l,i;
    scanf("%[^\n]s", &s);
    l=strlen(s);
    for (i = 0; i < l; i++)
    {
    	if (s[i]!=' ')
    	{
    		printf("%c", s[i]);
    	}
    	else
    	{
    		printf("\n");
    	}
    }
    return 0;
}
