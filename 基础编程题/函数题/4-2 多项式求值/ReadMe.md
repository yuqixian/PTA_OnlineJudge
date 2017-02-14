## 4-1 简单输出整数  
本题要求实现一个函数，对给定的正整数N，打印从*1*到*N*的全部正整数。
    void PrintN ( int N );
其中N是用户传入的参数。该函数必须将从1到N的全部正整数顺序打印出来，每个数字占1行。

裁判测试程序样例：

    #include <stdio.h>
    
    void PrintN ( int N );
    
    int main ()
    {
    int N;
    
    scanf("%d", &N);
    PrintN( N );
    
    return 0;
    }
  
/* 你的代码将被嵌在这里 */

输入样例：
    
    3
输出样例：

    1
    2
    3
    

##my code 
	void PrintN ( int N ){
	    
	    int i;
	    for (i = 1; i <= N; i++)
	    {
	        printf("%d\n", i);
	    }
	}