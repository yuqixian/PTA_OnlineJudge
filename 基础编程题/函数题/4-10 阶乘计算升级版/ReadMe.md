##4-10 阶乘计算升级版   

本题要求实现一个打印非负整数阶乘的函数。

**函数接口定义**：
```
void Print_Factorial ( const int N );
```
其中`N`是用户传入的参数，其值不超过1000。如果`N`是非负整数，则该函数必须在一行中打印出`N!`的值，否则打印`“Invalid input”`。

**裁判测试程序样例**：
```
#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

/* 你的代码将被嵌在这里 */
```
**输入样例**：
```
15
```
**输出样例**：
```
1307674368000
```

***Code***
```

void Print_Factorial ( const int N )
{
	int temp;
	int m = 0;	//要进的数 
	int k = 1;	//当前结果总位数 
	
	int fact[3000] = {0};
 	fact[0] = 1;
 	
	if( N>=0)
	{
		if( N==0 || N==1)	
		{
			temp = 1;
			printf("%d", temp);
		}
		else 
		{
			for(int i=2; i<=N; i++)
			{
				for( int j=0; j<k; j++)
				{
					temp = i * fact[j] + m;
					fact[j] = temp %10 ; 
					m = temp / 10 ;
					
					if( m && j==k-1)// 当有进位且已经处理到最前位时才开拓目标数组的下一位 
						k++; 
				}
			}
				
			for(int i=k-1; i>=0; i--)	
				printf("%d", fact[i]);
		}
	}
	else printf("Invalid input");
}
```