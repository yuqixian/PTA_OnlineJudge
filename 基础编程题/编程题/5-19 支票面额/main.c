#include<stdio.h> 

int main()
{
	int y, f, n;
	char flag = 0;
	scanf("%d", &n);
	
	for(y = 0; y < 100; y++)
	{
		for(f = 0; f < 100; f++)
		{
			if ( (n + 200*y + 2*f )==(100*f+ y) )
			{
				flag = 1;
				break;			
			}
			
		}
		if (flag)  break;
	}
	
	if (flag)	printf("%d.%d\n", y, f);
	else 	printf("No Solution\n");
	return 0;
}
