#include<stdio.h>

int main()
{
<<<<<<< HEAD
	int i,a,b;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for(i=1; i<=b-a; i++)
	{
		printf("%5d", a);
		sum += a;
		a += 1;
		if(i%5 == 0)	printf("\n");
	}
	if(i%5 != 0) printf("\n");
	printf("Sum = %d\n", sum);
=======
	int a, b, i, Sum=0;
	scanf("%d %d", &a, &b);
	for(i=1; i <= b-a+1; i++)
	{
		printf("%5d", a+i-1);
		Sum += (a+i-1);
		if(i%5 == 0)	printf("\n");
	}
	if( d(i-1)%5 != 0)	printf("\n");
	printf("Sum = %d\n", Sum);
>>>>>>> origin/master
	return 0;
}
