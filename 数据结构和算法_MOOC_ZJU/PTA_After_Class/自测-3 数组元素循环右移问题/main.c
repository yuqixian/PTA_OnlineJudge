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
