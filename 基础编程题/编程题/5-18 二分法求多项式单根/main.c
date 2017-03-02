#include<stdio.h>
#include<math.h>

float fx(float x);
float a3, a2, a1, a0;

int main()
{
	
	float a, b;
	float left, right, mid, ans; 
	
	scanf("%f %f %f %f", &a3, &a2, &a1, &a0);
	scanf("%f %f", &a, &b);
	
	left = a;
	right = b;
	while(right - left >= 0.0001 &&  fx(left)*fx(right) <= 0 )
	{
		if( fx(left)==0 || fx(right)==0 )
		{
			ans = (fx(left)==0 ? left : right);
			printf("%.2f", ans)	;
			return 0;
		}
		
		mid = ( left + right) / 2;
		if( fx(mid)*fx(left)>0 ) 
		{
			left = mid;
		}	
		else  
		{
			right = mid;
		}

		
	}
	
	printf("%.2f", mid)	;
	return 0;
}


float fx(float x)
{
	float temp;
	temp = a3*x*x*x + a2*x*x + a1*x +a0 ;  
	return temp;
}

