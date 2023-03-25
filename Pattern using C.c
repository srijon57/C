/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4 

top:              bottom:
4444444            222   
33333              33333
222                4444444
1

no print
4                  43
43                 4
432                no print

no print
4                  34
34                 4
234                no print
*/
#include <stdio.h>
int main()
{
	int a,b,c,i,j,k,l,m,n,r;
	scanf("%d", &n);
	for(i=n;i<=n&&i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf("%d ", j);
		}
		for (j=1;j<= i*2-2;j++)
		{
			printf("%d ", i);
		}
		for(j=i;j<=n;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	for(a=2;a<=n&&a>1;a++)
	{
		for(b=n;b>a;b--)
		{
			printf("%d ", b);
		}
		for(b=1;b<= a*2-1;b++)
		{
			printf("%d ", a);
		}
		for(b=a+1;b<=n;b++)
		{
			printf("%d ", b);
		}
		printf("\n");
	}	

	return 0;
}
