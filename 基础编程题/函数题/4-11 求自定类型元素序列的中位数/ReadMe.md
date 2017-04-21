##4-11 求自定类型元素序列的中位数   
本题要求实现一个函数，求`N`个集合元素`A[]`的中位数，即序列中第 `N/2 +1`大的元素。其中集合元素的类型为自定义的`ElementType`。

**函数接口定义**：
```
ElementType Median( ElementType A[], int N );
```
其中给定集合元素存放在数组`A[]`中，正整数`N`是数组元素个数。该函数须返回`N`个`A[]`元素的中位数，其值也必须是`ElementType`类型。

**裁判测试程序样例**：
```
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
```
**输入样例**：
```
3
12.3 34 -5
```
**输出样例**：
```
12.30
```

***Code***
```
ElementType Median( ElementType A[], int N )
{
	//冒泡法简单排序		
	for(int j=0; j<N-1; j++) //外循环喜欢N-1次 
	{
		for(int i=0; i<N-j-1; i++ )//内循环喜欢N-j次,因内循环每次把最大值沉到底部,不用N-j次 
		{
			if( A[i] > A[i+1])
			{
				ElementType k = A[i];
				A[i] = A[i+1];
				A[i+1] = k;
			}
		}
	}
	return  A[ N/2 ];
}
````