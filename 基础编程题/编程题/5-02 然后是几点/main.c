#include<stdio.h>

int main()
{
	int hour,min,temp;
	scanf("%d %d", &hour, &min);
	temp = hour/100*60 + hour%100 + min;
	temp = temp/60*100 + temp%60;
	printf("%d", temp);
	return 0;
}
