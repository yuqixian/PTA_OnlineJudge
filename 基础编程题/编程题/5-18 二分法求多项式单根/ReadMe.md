## 5-18 二分法求多项式单根   (20分)
二分法求函数根的原理为：如果连续函数f(x)f(x)在区间[a, b][a,b]的两个端点取值异号，即f(a)f(b)<0f(a)f(b)<0，则它在这个区间内至少存在1个根rr，即f(r)=0f(r)=0。

**二分法**的步骤为：

- 检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2(a+b)/2；否则
- 如果f(a)f(b)<0f(a)f(b)<0，则计算中点的值f((a+b)/2)f((a+b)/2)；
- 如果f((a+b)/2)f((a+b)/2)正好为0，则(a+b)/2(a+b)/2就是要求的根；否则
- 如果f((a+b)/2)f((a+b)/2)与f(a)f(a)同号，则说明根在区间[(a+b)/2, b][(a+b)/2,b]，令 	a=(a+b)/2a=(a+b)/2，重复循环；
- 如果f((a+b)/2)f((a+b)/2)与f(b)f(b)同号，则说明根在区间[a, (a+b)/2][a,(a+b)/2]，令	b=(a+b)/2b=(a+b)/2，重复循环。

本题目要求编写程序，计算给定3阶多项式f(x)=a_3 x^3 +a_2 x^2 +a_1 x+a_0f(x)=a
​​ 在给定区间[a, b][a,b]内的根。

### 输入格式：

输入在第1行中顺序给出多项式的4个系数​`a3 a2 a1 a0`,在第2行中顺序给出区间端点`a`和`b`。题目保证多项式在给定区间内存在唯一单根。

###  输出格式：

在一行中输出该多项式在该区间内的根，精确到小数点后2位。

**输入样例**：

	3 -1 -3 1
	-0.5 0.5
**输出样例**：

	0.33

### C
	#include<stdio.h>
	#include<math.h>
	
	float fx(float x);
	float a3, a2, a1, a0;
	
	int main()
	{
		
		float a, b;
		float left, right, mid, ans; 
		
		scanf("%f %f %f %f", &a3, &a2, &a1, &a0);
		scanf("%f %f", &a, &b);
		
		left = a;
		right = b;
		while(right - left >= 0.0001 &&  fx(left)*fx(right) <= 0 )
		{
			if( fx(left)==0 || fx(right)==0 )
			{
				ans = (fx(left)==0 ? left : right);
				printf("%.2f", ans)	;
				return 0;
			}
			
			mid = ( left + right) / 2;
			if( fx(mid)*fx(left)>0 ) 
			{
				left = mid;
			}	
			else  
			{
				right = mid;
			}
	
			
		}
		
		printf("%.2f", mid)	;
		return 0;
	}
	
	
	float fx(float x)
	{
		float temp;
		temp = a3*x*x*x + a2*x*x + a1*x +a0 ;  
		return temp;
	}
