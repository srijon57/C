#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i,j=0,j1=0,j2=0,j3=0,j4=0,j5=0,j6=0,j7=0,j8=0,j9=0;
	scanf("%s", &a);
	printf("%s\n", a);
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i]=='0')
		{
			j=1+j;
		}
		if (a[i]=='1')
		{
			j1=1+j1;
		}
		if (a[i]=='2')
		{
			j2=1+j2;
		}
		if (a[i]=='3')
		{
			j3=1+j3;
		}
		if (a[i]=='4')
		{
			j4=1+j4;
		}
		if (a[i]=='5')
		{
			j5=1+j5;
		}
		if (a[i]=='6')
		{
			j6=1+j6;
		}
		if (a[i]=='7')
		{
			j7=1+j7;
		}
		if (a[i]=='8')
		{
			j8=1+j8;
		}
		if (a[i]=='9')
		{
			j9=1+j9;
		}
	}
	printf("%d %d %d %d %d %d %d %d %d %d\n", j,j1,j2,j3,j4,j5,j6,j7,j8,j9);
	return 0;
}
