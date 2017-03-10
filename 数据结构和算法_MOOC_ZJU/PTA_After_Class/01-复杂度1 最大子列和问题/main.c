#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int sum,all_sum, max_sum = 0;
	
	for(int i=1; i<n; i++)
	{
		scanf("%d ", &a[i]);
		all_sum += a[i];
	}
		
	if(all_sum < 0)		printf("0");
	else
	{
		for(int i=0; i<=n-3 ;i++)
		{
			sum = a[i] +a[i+1] +a[i+2];
			if (sum > max_sum)	max_sum = sum;
		}
	}
	printf("%d", max_sum);
	
	return 0;
}
