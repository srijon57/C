// #include<stdio.h>
// struct student {
//     char name[100];
//     int id;
//     char dpt[50];
//     float cgpa;
// };
// int main()
// {
//     struct student stu[2];
//     struct student s;
//     for (int i = 0; i < 2; i++)
//     {
//         fflush(stdin);
//         printf("enter name");
//         scanf("%s", stu[i].name);
//         printf("enter id and cgpa");
//         scanf("%d %f", &stu[i].id, &stu[i].cgpa);
//         fflush(stdin);
//         printf("enter department");
//         scanf("%s", stu[i].dpt);
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i + 1; j < 2; j++)
//         {
//             if (stu[j].cgpa > stu[i].cgpa)
//             {
//                 s = stu[i];
//                 stu[i] = stu[j];
//                 stu[j] = s;
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         printf("%s", stu[i].name);
//         printf("\n%d %.2f\n", stu[i].id, stu[i].cgpa);
//         //printf("%s", stu[i].dpt);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a[]={2 , 3 , 1, 30, 12, 2 ,101 ,5};
//     int *p;
//     p=a;
//     printf("%d\n", *p);
//     p=p+1;
//     printf("%d\n", *p);
//     (*p)++;
//     printf("%d\n", *p);
//     p++;
//     printf("%d\n", *p);
//     *p=*p+1;
//     printf("%d\n", *p);
//     *p++;
//     printf("%d\n", *p);
//     p=p+1;
//     printf("%d\n", *p);
//     *p=*(p+1);
//     printf("%d\n", *p);
//     (&*p--);
//     printf("%d\n", *p);
//     for(int i=0;i<9;i++)
//         printf("%d ", a[i]);
// }
// #include<stdio.h>
// int main()
// {
// 	int i, j,count;
// 	count = 5;
// 	for (i = 1; i <= count; i++)
// 	{
// 		for (j = 1; j <= count; j++)
// 		{
// 			if (j == i || (j == count - i + 1))
// 			{
// 				printf("*");
// 			}
// 			else
// 			{
// 				printf("_");
// 			}
// 		}
// 		printf("\n");
// 	}
// }
// #include <stdio.h>
// int main()
// {
// int i, j, x = 0;
// for(i=8; i > 4; i--)
// for(j=4; j<i; ++j)
// {
// printf("%d  ", i - i * j + j);
// x++;
// }
// printf("\n%d", x);
// return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int *)malloc(3*sizeof(int));
//     for(int i=0;i<3;++i)
//         scanf("%d ", (ptr+i));

//     for(int i=0;i<6;i++){
//         printf("%d ", *(ptr+i));}

//         printf("\n");

//      ptr=(int *)realloc(ptr,100);//
//     //ptr=(int *)calloc(4,sizeof(int));
//     for(int i=3;i<6;i++)
//         scanf("%d ", (ptr+i));
//     free(ptr);
//     for(int i=0;i<6;i++)
//         printf("%d ", *(ptr+i));
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int l,c=0,mc=0;
// 	char string[100],a;
// 	gets(string);
// 	l=strlen(string);
// 	for(int i=0;i<l;i++)
// 	{
// 		for(int j=0;j<l;j++)
// 		{
// 			if(string[i]==string[j])
// 			{
// 				c++;
// 			}
// 		}
// 		if(c>mc)
// 			{
// 				mc=c;
// 				a=string[i];
// 			}
// 		c=0;
// 	}
// 	printf("Maximum occuring charecter is %c", a);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char s[100];
// 	gets(s);
// 	int a = 0, e = 0, x = 0, o = 0, u = 0, l;
// 	l = strlen(s);
// 	for (int i = 0; i<l; i++)
// 	{

// 		if (s[i] == 'a' || s[i] == 'A')
// 			a++;
// 		else if (s[i] == 'e' || s[i] == 'E')
// 			e++;
// 		else if (s[i] == 'i' || s[i] == 'I')
// 			x++;
// 		else if (s[i] == 'o' || s[i] == 'O')
// 			o++;
// 		else if (s[i] == 'u' || s[i] == 'U')
// 			u++;
// 	}
// 	if (a != 0)
// 		printf("A = %d\n", a);
// 	if (e != 0)
// 		printf("E = %d\n", e);
// 	if (x != 0)
// 		printf("I = %d\n", x);
// 	if (o != 0)
// 		printf("O = %d\n", o);
// 	if (u != 0)
// 		printf("U = %d\n", u);

// }

// #include<stdio.h>
// int main()
// {
// 	char a[100], b[100];
// 	int x = 0, c = 0;
// 	gets(a);
// 	for (int i = 0; a[i] != '\0'; i++)
// 		x++;
// 	for (int i = x - 1; i >= 0; i--)
// 	{
// 		b[c] = a[i];
// 		c++;
// 	}
// 	for (int i = 0; i < x; i++)
// 	{
// 		if (a[i] != b[i])
// 		{
// 			printf("Not palindrome");
// 			break;
// 		}
// 		else
// 		{
// 			printf("palindrome");
// 			break;
// 		}
// 	}
// }

// #include<stdio.h>
// int value(int p, int *z)
// {
//     printf("zp=%d\n",*(z+p));
//     z+=p;
//     *z=20;
//    printf("z1=%d\n",*(z+1));
//     printf("az=%d\n",z);
//     return p-1;

// }
// int main()
// {
//     int i;
//     int num[]={3,7,4,6,11,2,3,8,9,88,0};
//     for(i=1;i<8;i++)
//         num[i]=value(i,num);
//     i=0;
//     while(i<10)
//     {
//         printf("%d\t",num[i++]); 
//     }
// }


// #include<stdio.h>
// int value(int p,int *z)
// {
//     z=z+p;
//     *z=*z+p;
//     return *z-1;
// }
// int main ()
// {
//     int i;
//     int num [3][4]={3,7,4,6 ,11,2,3,8, 9,88,0,33};
//     for(i=1;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             num[i][j]=value(i,num);
//     }
//     for (i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//             printf("%d\t",num[i][j]);
//         printf("\n");
//     }
//     // 3	10	10	6	
// 	// 7	8	9	8	
// 	// 5	7	9	33
// }

// #include<stdio.h>
// int prime(int x)
// {
// 	if (x == 0 || x == 1)
// 		return 0;
// 	for (int i = 2; i * i <= x; i++)
// 	{
// 		if (x % i == 0)
// 			return 0;
// 	}
// 	return 1;
// }
// int odd(int x)
// {
// 	if(x%2==0)
// 		return 1;
// 	else return 0;
// }
// int main()
// {
// 	int count=0;
// 	for(int x=100;x<1000;x++)
// 	{
// 		int c,a,b;
// 		while(1)
// 		{
// 			a=x%100;
// 			b=(x/10)%10;
// 			c=x%10;
// 			if(prime(a)==1&&odd(b)==1&&(c!=a&&c!=b))
// 				count++;
// 			break;
// 		}

// 	}
// 	printf("%d", count);
// }


// #include<stdio.h>
// #include<math.h>
// void pal(int a)
// {	
// 	int rev=0,rem,b=a;
// 	while(b!=0)
// 	{
// 		rem=b%10;
// 		rev=(rev*10)+rem;
// 		b=b/10;
// 	}
// 	if(rev==a)
// 		printf("palindrome");
// 	else
// 		printf("not palindorme");
// }
// int main()
// {
// 	int a;
// 	scanf("%d", &a);
// 	pal(a);
	
// }

// #include <stdio.h>
// int main()
// {
// 	int temp;
// 	int a[]={3,10,10,6	,7,	8,	9,	8,	5,	7};
// 	int l=sizeof(a)/sizeof(a[0]);
// 	for(int i=0;i<l;i++)
// 	{
// 		for(int j=l-1;j>=i;j--)
// 		{
// 			if (a[i]>a[j])
// 			{
// 				temp=a[i];
// 				a[i]=a[j];
// 				a[j]=temp;
// 			}
// 		}
// 	}
// 	for(int i=0;i<l;i++)
// 		printf("%d ", a[i]);
// 	printf("\n");
// 	if(l%2==0)
// 		printf("%d %d", a[l/2],a[l/2+1]);
// 	else
// 		printf("%d",a[l/2+1]);
// }
// #include<stdio.h>
// void display (int *p)
// {
//     int *x,*y,*z,a;
//     x=p;
//     y=p+4;
//     z=p+*p;
//     z++;
//     printf("%d\n",*z);
//     a=((*z)++)*2-((*x)/(*y));
//     printf("%d",*z);
//     *x=*x+ -8;
//     printf("%d %d %d\n",*x,*y,a);
//     p=p+8;
//     *p=a;
// }
// int main ()
// {
//    int p[]={2,4,5,7,8,8,5,6,4};
//    display(p);
//    printf("Final values in array \n");
//    for(int i=0;i<9;i++)
//    printf("%d\n",p[i]);
//    printf("\nFrom main p=%d",p);

// }
// #include <stdio.h>  
// #include <stdlib.h>
// int isPrime(int n);
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int prime = isPrime(n);
//     if (prime == 1)
//         printf("%d is a prime number\n", n);
//     else
//         printf("%d is not a prime number\n", n);

//     return 0;
// }

// int isPrime(int n) 
// {
//     int i;
//     if (n <= 1)
//         return 0;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// #include<stdio.h>
// struct employees{
// int id;
// char name[50];
// int sal;
// };

// int main()
// {
//     int n,i;
//     struct employees emp[5];
//     scanf("%d",&n);
//     for(i=0;i<=3;i++)
//     {
//         printf("Enter id : ");
//         scanf("%d",&emp[i].id);
//         printf("Enter name :");
//         scanf("%s",emp[i].name);
//         printf("Enter salary : ");
//         scanf("%d",&emp[i].sal);
//     }
//     for(i=0;i<=3;i++)
//     {
//         if(emp[i].sal>n)
//             printf("%d ",emp[i].sal);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i,j,r=4;
//     for(i=r;i>=1;i--)
//     {
//         for(j=i;j<r;j++)
//         {
//             printf("_");
//         }
//         for(j=1;j<=(2*i-1);j++)
//         {
//             if(i==r||j==1||j==(2*i-1))
//                 printf("*");
//             else
//                 printf("_");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>

//  int main()
//  {

//      for(int i=1;i<3;i++)
//      {
//         for(int j=0;j<3;j++)
//             printf("i=%d j=%d\n", i,j);
//      }
//  }
// #include<stdio.h>
// void gv(int *p, int *q)
// {
//     int *temp;
//     printf("%d %d\n", *p,*q);
//     p++;
//     q--;
//     printf("%d %d\n", *p,*q);
//     //printf("%d \n", *p);
//     (*p)++;
//     //(p)++;
//     //*p=*p+1;
//     *q--;
//     //*q=*q-1;

//     printf("%d %d\n", *p,*q);
//     //printf("%d \n", *p);
//     *p++;
//     (*q)--;
//     printf("%d %d\n", *p,*q);
//     temp=p;
//     p=q;
//     q=temp;
//     printf("%d %d\n", *(p+1),*(q-1));
// }
// int main()
// {
//     int a[]={10,25,5,-2,9,100,90,-3,7,45};
//     int *x;
//     x=a;
//     gv(x,x+8);
// }

// #include<stdio.h>
// void display (int *p)
// {
//     int *x,*y,*z,a;
//     x=p;
//     y=p+4;
//     z=p+*p;
//     z++;
//     a=((*z)++)*2-((*x)/(*y));
//     *x=*x+ -8;
//     printf("%d %d %d\n",*x,*y,a);
//     p=p+8;
//     *p=a;
// }
// int main ()
// {
//    int p[]={2,4,5,7,8,8,5,6,4};
//    display(p);
//    printf("Final values in array \n");
//    for(int i=0;i<9;i++)

//    printf("%d\n",p[i]);
//    printf("\nFrom main p=%d",p);

// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             scanf("%d", &a[i][j]);
//     }
//     for(int i=1;i<3;i++)
//     {
//         for(int j=0;j<i;j++)
//             printf("%d ", a[i][j]);
//         printf("\n");
//     }
//     int n=3;
//     for(int i=0,j=n-1;i<n;i++,j--)
//     {
//             sum=sum+a[i][j];
//     }

//     printf("%d", sum);
// }

// #include <stdio.h>

// int main() {

//     int n1, n2, max;

//     printf("Enter two positive integers: ");
//     scanf("%d %d", &n1, &n2);

//     // maximum number between n1 and n2 is stored in max
//     max = (n1 > n2) ? n1 : n2;

//     while (1) {
//         if ((max % n1 == 0) && (max % n2 == 0)) {
//             printf("The LCM of %d and %d is %d.", n1, n2, max);
//             break;
//         }
//         ++max;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {

//     int n1, n2, i, gcd, lcm;

//     printf("Enter two positive integers: ");
//     scanf("%d %d", &n1, &n2);

//     // loop to find the GCD
//     for (i = 1; i <= n1 && i <= n2; ++i) {
        
//         // check if i is a factor of both integers
//         if (n1 % i == 0 && n2 % i == 0)
//             gcd = i;
//     }

//     lcm = (n1 * n2) / gcd;

//     printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int a[100], b[100], c[200], ind = 0, temp, N;
//     printf("Give the Size of 1st and 2nd array :");
//     scanf("%d", &N);
//     printf("Enter the element of 1st array :");
//     for (int i = 0; i < N; i++)
//         scanf("%d", & a[i]);
//     printf("Enter the element of 2nd array:");
//     for (int i = 0; i < N; i++)
//         scanf("%d", & b[i]);
//     printf("\n Merging a[%d] and b[%d] to c[%d]...\n", N, N, N * 2);
//     for (int i = 0; i < N; i++) {
//         c[ind] = a[i];
//         ind++;
//     }
//     for (int i = 0; i < N; i++) {
//         c[ind] = b[i];
//         ind++;
//     }
//     printf("\n Merging of array c[%d]\n", N * 2);
//     for (int i = 0; i < (N * 2); i++)
//         printf("%d ", c[i]);

//     for (int i = 0; i < (2 * N+1); i++)
//     {
//         for (int j = i + 1; j < (2 * N+1); j++)
//         {
//             if (c[i] > c[j])
//             {
//                 temp = c[i];
//                 c[i] = c[j];
//                 c[j] = temp;
//             }
//         }
//     }
//     printf("\n elemrnt of array c[%d]\n", N * 2);
//     for (int i = 0; i < (N * 2+1); i++)
//         printf("%d ", c[i]);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100];
//     int i, wrd;
//        printf("Input the string : ");
//        gets(str);
//     i = 0;
//     wrd = 1;
//     while(str[i]!='\0')
//     {
//         if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
//         {
//             wrd++;
//         }
//         i++;
//     }
//     printf("Total number of words in the string is : %d\n", wrd);
// }


// #include<stdio.h>
// int main ()
// {
//     int i,j,rows=4;
//     for(i=4; i>=1; i--)
//     {
//         for(j=i; j<rows; j++)
//         {
//             printf("_");
//         }
//         for(j=1; j<=(2*i-1); j++)
//         {
//             if (i==rows||j==1||j==(2*i-1))
//             {
//                 printf("*");

//             }
//             else
//             {
//                 printf("_");
//             }
//         }
//               printf("\n");
//     }
// }

// #include<stdio.h>
// int nn;
// void series(int x)
// {
//     static int a=0;
//     if(a==10)
//         return;
//     nn=(x*1468)%467;
//     printf("%d\n",nn);
//     a++;
//     series(nn);
// }
// int main()
// {
//     int pv=25;
//     series(pv);
// }

// #include<stdio.h>
// int main()
// {
//     FILE *fp1, *fp2;
//     char a;
//     fp1 = fopen("E:/input.txt", "r+");
//     fp2 = fopen("G:/test.txt", "w+");
//     if (fp1 == NULL || fp2 == NULL)
//     {
//         printf("A file doesn't exist");
//         return 0;
//     }
//     else
//     {
//         printf("file exists\n");
//         while (fscanf(fp1, "%c", &a) != EOF)
//             fprintf(fp2, "%c", a);
//         fclose(fp1);
//         fclose(fp2);
//         remove("E:/input.txt");
//     }
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100],str2[100];
//     gets(str1);
//     int l=strlen(str1),a=0;
//     for(int i=l-1;i>=0;i--)
//     {
//         str2[a]=str1[i];
//         a++;
//     }
//     for(int i=0;i<l;i++)
//     {
//         if(str1[i]!=str2[i])
//             {printf("Not palindrome");
//         break;}
//         else
//             a=1;
//     }
//     if(a==1)
//         printf("palindrome");

// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             scanf("%d", &a[i][j]);
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             b[i][j]=a[j][i];
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             printf("%d ", b[i][j]);
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void primefactor(int a)
// {
//     int b=a;
//     for(int i=2;i<b;i++)
//     {
//         if(b%i==0)
//             printf("%d ", i);
//     }
// }
// int main()
// {
//     int a;
//     scanf("%d", &a);
//      primefactor(a);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100],str2[100];
//     gets(str1);
//     int l = strlen(str1), a = 0;
//     for (int i = 0; i < l; i++)
//     {
//         if ((str1[i] > 'A' && str1[i] < 'Z') || (str1[i] > 'a' && str1[i] < 'z')||str1[i]==' ')
//             continue;
//         else
//         {   str2[a] = str1[i];
//             a++;
//         }
//     }
//     puts(str2);
// }

// #include<stdio.h>
// struct hotelinfo {
//     char name[50];
//     char adr[100];
//     float rent;
//     int room;
// };
// int main()
// {
//     struct hotelinfo hot[3];
//     for (int i = 0; i < 3; i++)
//     {
//         fflush(stdin);
//         printf("Hotel name : ");
//         scanf("%s", hot[i].name);
//         printf("Hotel adress : ");
//         fflush(stdin);
//         gets(hot[i].adr);
//         printf("Rent per room : ");
//         scanf("%f", &hot[i].rent);
//         printf("Number of rooms : ");
//         scanf("%d", &hot[i].room);
//     }
//     printf("give the value of x : ");
//     float x;
//     scanf("%f", &x);
//     for (int i = 0; i < 3; i++)
//     {
//         if (hot[i].rent < x)
//         {   printf("Hotel name : ");
//             printf("%s\n", hot[i].name);
//             printf("Hotel adress : ");
//             puts(hot[i].adr);
//             printf("Rent per room : ");
//             printf("\n%.2f\n", hot[i].rent);
//             printf("Number of rooms : ");
//             printf("%d\n", hot[i].room);
//         }
//     }
// }

// #include<stdio.h>
// int fact(int x)
// {
//     if(x==0)
//         return 1;
//     return x*fact(x-1);
// }
// int special(int x)
// {
//     int sum=0,a,b;
//     while(x!=0)
//     {
//         a=x%10;
//         b=fact(a);
//         sum=sum+b;
//         x=x/10;
//     }
//     return sum;
// }
// int main()
// {
//     int x,y;
//     scanf("%d", &x);
//     y=special(x);
//     if(y==x)
//         printf("special");
//     else
//         printf("not special");
// }

// #include<stdio.h>
// int main()
// {
// 	int x=3;
// 	switch(x)
// 	{
// 	case 2: printf("2");
// 		break;
// 	case 3: printf("3");
// 	default: printf("default");
// 	}
// }
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
// 	int a,rev=0,rem;
// 	scanf("%d", &a);
// 	while(a!=0)
// 	{
// 		rem=a%10;
// 		rev=rev*10+rem;
// 		a=a/10;
// 	}
// return 0;
// }

// #include<stdio.h>
// void rec(int p)
// {
// 	if(p>=2){
// 		printf("P1 is %d\n",p);
// 	rec(p-2);
// 	p=p+3;
// 	printf("P2 is %d\n", p);}
// }
// int main()
// {
// 	rec(6);
// 	return 0;
// }
