#include <stdio.h>
#include<math.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
				
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit ( const int N, const int D )
{
	int temp;
	int n = abs(N);
	int d = 0;
	
	if(n == 0 && N == 0) //注意0的情况 
		d = 1;
	
	while( n>0 )
	{	
		temp = n%10;
		if( temp == D)
			d++;
		n /= 10;
	}
	return d;
}
