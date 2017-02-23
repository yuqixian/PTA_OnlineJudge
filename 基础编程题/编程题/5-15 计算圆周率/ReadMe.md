## 5-15 计算圆周率   
根据下面关系式，求圆周率的值，直到最后一项的值小于给定阈值。

\frac{\pi}{2} = 1+\frac{1}{3} + \frac{2!}{3\times 5}+ \frac{3!}{3\times 5\times 7}+\cdots + \frac{n!}{3\times 5\times 7\times \cdots \times (2n+1)}+\cdots


### 输入格式：

输入在一行中给出小于1的阈值。

### 输出格式：

在一行中输出满足阈值条件的近似圆周率，输出到小数点后6位。

### 输入样例：

    0.01
### 输出样例：

    3.132157
### C
    #include<stdio.h>
    
    int main()
    {
    	int n=1;
    	double pi_2=1.0, fm=1.0, fz=1.0;
    	double gateVa;
    	scanf("%lf", &gateVa);
    
    	while( fz / fm >= gateVa)
    	{
    		fz *= 1.0*n;
    		fm *= (2*n+1.0);
    		n++;
    		pi_2 += fz / fm;
    	}
    
    	printf("%.6lf", pi_2*2);
    	return 0;
    }