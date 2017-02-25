#include<stdio.h>

int main()
{
	int N, U, D;
	int up = 0, time = 0;
	scanf("%d %d %d", &N, &U, &D);
	while( up < N)
	{
		time ++ ;
		if ( time%2 == 1)	up += U;
		if ( time%2 == 0)	up -= D;
		
	}
	printf("%d", time);
	return 0;
}
