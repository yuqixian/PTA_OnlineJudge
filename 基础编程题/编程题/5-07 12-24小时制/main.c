#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d:%d",  &a, &b);
	if( a > 12 )
		printf("%d:%d PM", a-12, b);
	else if (a == 12)
		printf("%d:%d PM", a, b);
	else
		 printf("%d:%d AM", a, b);
	return 0;
}
