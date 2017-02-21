#include<stdio.h>

int main()
{
	int hex,dnum;
	scanf("%d", &hex);
	dnum = hex/16*10 + hex%16;
	printf("%d", dnum) ;
	return 0;
}
