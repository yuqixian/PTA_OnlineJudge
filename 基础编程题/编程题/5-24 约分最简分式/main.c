#include<stdio.h>

int maxCom(int a, int b);

int main()
{
	int up, down;
	int com;
	scanf("%d/%d", &up, &down);
	com = maxCom(up, down);
	up /= com;
	down /= com;
	printf("%d/%d", up, down);
	
	return 0;
}

int maxCom(int a, int b)
{
	int max = 1;
	int min = a>b?a:b;
	for(int i=1 ; i<=min; i++)
	{
		if(a%i==0 && b%i==0)
			max = i;
	}
	
	return max;
}
