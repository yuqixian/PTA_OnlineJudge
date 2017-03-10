## 5-21 求特殊方程的正整数解  
本题要求对任意给定的正整数NN，求方程X^2 + Y^2 ​=N的全部正整数解。

###输入格式：

输入在一行中给出正整数NN（\le≤10000）。

## 输出格式：

输出方程X^2 + Y^2 =N的全部正整数解，其中X\le YX≤Y。每组解占1行，两数字间以1空格分隔，按XX的递增顺序输出。如果没有解，则输出No Solution。

### 输入样例1：

	884
### 输出样例1：
	
	10 28
	20 22
### 输入样例2：

	
### 输出样例2：

	No Solution

###C
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