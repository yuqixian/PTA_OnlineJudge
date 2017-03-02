### 5-19 支票面额   
一个采购员去银行兑换一张yy元ff分的支票，结果出纳员错给了ff元yy分。采购员用去了nn分之后才发觉有错，于是清点了余额尚有2y2y元2f2f分，问该支票面额是多少？

### 输入格式：
 
输入在一行中给出小于100的正整数nn。

### 输出格式：

在一行中按格式y.f输出该支票的原始面额。如果无解，则输出`No Solution`。

### 输入样例1：

	23
### 输出样例1：

	25.51
### 输入样例2：

	22
### 输出样例2：

	No Solution

###C 
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

	或者直接在第一个if那里输出好了