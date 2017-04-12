#include <stdio.h>

void Print_Factorial ( const int N );

int main()
{
    int N;
				
    scanf("%d", &N);
    Print_Factorial(N);
    return 0;
}

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
