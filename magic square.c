#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,j,num=1,s;
  printf("Enter the size of magic square:");
  scanf("%d",&n);
  int a[n][n];
  //Initialising magicsquare to 0
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      a[i][j]=0;
  //Placing the first number i.e 1
  i=0;
  j=(n-1)/2;
  a[i][j]=num++;

  //Placing the rest of the numbers 
  while(num<=n*n)
  {
    s=a[(i+n-1)%n][(j+1)%n];
    if(s==0)
      a[(i+n-1)%n][(j+1)%n]=num++;
    else
    {
      i=(i+1)%n;
      a[i][j]=num++;
    }
    i=(i+n-1)%n;
    j=(j+1)%n;
  }
  //Displaying the magicsquare
  printf("The Magic Square is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      printf("%d\t",a[i][j]);
    printf("\n");
  }
  return 0;
}
