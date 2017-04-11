#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
				
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

int Factorial( const int N ) //递归思想，注意边界条件 
{
	int temp = 0;
	if ( N>=0)
	{
		if( N==1 || N==0)	temp = 1;
		else temp = N * Factorial(N-1);
	}
	return temp;
}
