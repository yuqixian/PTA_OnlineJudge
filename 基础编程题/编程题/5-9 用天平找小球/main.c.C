#include<stdio.h>

int main()
{			
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && a!=c)
		printf("C");
	else if(a==c && a!=b)
		printf("B");
	else 
		printf("A");
	return 0;
}
