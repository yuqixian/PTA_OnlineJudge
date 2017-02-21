#include<stdio.h>

int main()
{
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
	return 0;
}
