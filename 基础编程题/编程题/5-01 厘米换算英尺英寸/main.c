#include<stdio.h>
#define CHN 2.54

int main()
{
	int hight,foot,inch;
	float temp;
	scanf("%d", &hight);
	temp = hight / CHN;
	foot = temp / 12;
	inch = (int)temp % 12;
	printf("%d %d", foot, inch);
	return 0;
}

/*test*/
