#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	printf("%.2f", num>15 ? (2.5*num-17.5) : (4*1.0*num/3) );
	return 0;
}
