#include<stdio.h>

int main()
{
	float open, high, low, close;
	char *a = "BW-Solid";
	char *b = "";
	char *c = "";
	scanf("%f %f %f %f", &open, &high, &low, &close);
	
	if (close == open)
		a = "R-Cross";
	else 
		a = close < open ? "BW-Solid": "R-Hollow";	
					
	if (low<close && low<open)
		b = " with Lower Shadow";
		
	if (high>close && high>open)
		c = " with Upper Shadow";
		
	if ((low<close && low<open) && (high>close && high>open))
		{
			c = " and Upper Shadow";
		}
		
	printf(a);
	printf(b);
	printf(c);
	return 0;
}
