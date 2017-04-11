#include<stdio.h>

int main()
{
	long ori;
	int a[9];
	int i = 0;
	scanf("%d", &ori);
	while( ori /10 > 9)
	{
		a[i] = ori%10;
		ori = ori / 10;
		i++;
	}
	
	for(int j=0; j<i; j++)
	{
		printf("%s", 'a'+a[j]);
	}
	return 0;
}
