#include <stdio.h>

int even( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    if (even(n))
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);

    return 0;
}

#include<math.h>

int even( int n )
{
	char flag = 0;
	
	if( abs(n)%2 == 0)
		flag = 1;
	
	return flag;
}
