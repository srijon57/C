//User vs User
#include<stdio.h>
int main()
{
	int m = 21, u, e;
	for (; m >= 1;)
	{

		printf("User A pick match between (1 to 4) from %d: ", m);
		scanf("%d", &u);
		if (u > 4)
		{
			printf("Error pick");
			break;
		}
		m = m - u;
		if (m <= 0)
		{
			printf("User B is winner");
			break;
		}
		printf("User B pick match between (1 to 4) from %d: ", m);
		scanf("%d", &e);
		if (e > 4)
		{
			printf("Error pick");
			break;
		}
		m = m - e;
		if (m <= 0)
		{
			printf("User A is winner");
			break;
		}
	}
	return (0);
}
//User vs programme
#include<stdio.h>
int main()
{
    int m = 21, u, p;
    for (; m >= 1;)
    {
        printf("Total Match : %d\n", m);
        printf("User picks match between (1 to 4) from %d: ", m);
        scanf("%d", &u);
        if (u > 4)
        {
            printf("Error pick");
            break;
        }
        p = 5 - u;
        printf("Programme picks the %d matchs.\n", p);
        m = m - (u + p);
        if (m == 1)
        {
            printf("\nYou have been lost\n Game End\nWinner is programme");
            break;
        }
        if (m == 2)
        {
            printf("\nWinner Winner Chicken Dinner\nGame End");
            break;
        }
    }
    return (0);
}
