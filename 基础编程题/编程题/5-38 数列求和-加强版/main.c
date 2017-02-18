#include<math.h>
#include<stdio.h>

int main()
{
	int x, N;
	long sum, num;
	//int i;
	scanf("%d %d", &x, &N);
	sum = num = x;
	for(int i=1; i<N; i++)
	{
		num = (num + x*pow(10,i) );
		sum = sum + num;
		//printf("%d %d\n", num, sum); 
	}
	printf("%d", sum); 
	return 0;
}
