#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	int flag = 0;
	scanf("%d", &N);
	
	for(int i=1; i <= N/2; i++)
	{
		for(int j=1; j <= N/2; j++)
		{
			if ((i*i+j*j )== N && i<=j)
			{
				printf("%d %d\n", i, j);
				flag = 1;
			}
		}
	}
	
	if( !flag )
		printf("No Solution\n");
	return 0;
}
