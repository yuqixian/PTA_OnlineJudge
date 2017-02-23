#include<stdio.h>

int main()
{
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
	return 0;
}
