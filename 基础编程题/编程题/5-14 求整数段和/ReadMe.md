## 5-14 求整数段和   
给定两个整数AA和BB，输出从AA到BB的所有整数以及这些数的和。

### 输入格式：

输入在一行中给出2个整数AA和BB，其中-100\le A\le B\le 100−100≤A≤B≤100，其间以空格分隔。

### 输出格式：

首先顺序输出从AA到BB的所有整数，每5个数字占一行，每个数字占5个字符宽度，向右对齐。最后在一行中按Sum = X的格式输出全部数字的和X。

### 输入样例：

    -3 8
### 输出样例：

        -3   -2   -1    0    1
        2    3    4    5    6
        7    8
    Sum = 30
    
### C
    #include<stdio.h>
    
    int main()
    {
    	int a, b, i, Sum=0;
    	scanf("%d %d", &a, &b);
    	for(i=1; i <= b-a+1; i++)
    	{
    		printf("%5d", a+i-1);
    		Sum += (a+i-1);
    		if(i%5 == 0)	printf("\n");
    	}
    	if( d(i-1)%5 != 0)	printf("\n");
    	printf("Sum = %d\n", Sum);
    	return 0;
    }