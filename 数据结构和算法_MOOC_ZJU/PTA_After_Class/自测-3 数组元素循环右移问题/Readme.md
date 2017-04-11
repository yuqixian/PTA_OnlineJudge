##自测-2 素数对猜想   
让我们定义dn为：dn = pn+1-pn,​​其中pi是第i个素数。显然有d1=1
，且对于n>1有d​n是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数N(<10^5​​ )，请计算不超过N的满足猜想的素数对的个数。

###### 输入格式:

输入在一行给出正整数N。

###### 输出格式:

在一行中输出不超过N的满足猜想的素数对的个数。

###### 输入样例:

  20
###### 输出样例:

4

***Code***
```
#include <stdio.h> 
#include<math.h> 
#include <stdbool.h>  

bool  isPrime(int num);

int main(void)  
{  
    int N, primeDu = 0; 
	int primeA=1, primeB=2; 
   	int prime[1000];
	scanf("%d", &N);  
	for( int i=2; i<= N; i++)
	{
		if(isPrime(i) == true )
		{
			primeA = primeB;
			primeB = i;
			if (primeB - primeA == 2)
			primeDu++;
		}
	}
	printf("%d", primeDu);
    return 0;  
}  

bool isPrime(int num)
{	
	bool flag = false;
	int i;
	int k = sqrt(num);
	for(i=2; i<=k; i++)
		if (num%i ==0) break;	
	if(i>k)	flag = true;
	return flag;
}
```