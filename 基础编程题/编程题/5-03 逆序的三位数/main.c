#include<stdio.h>

int main()
{
	int num,temp;
	scanf("%d", &num);
	temp = num/100 + num%100/10*10 + num%10*100;
	printf("%d", temp);
	return 0;
}
