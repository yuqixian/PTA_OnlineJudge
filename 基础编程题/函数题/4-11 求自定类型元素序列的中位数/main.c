#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main ()
{
    ElementType A[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));

    return 0;
}

ElementType Median( ElementType A[], int N )
{
	//冒泡法简单排序		
	for(int j=0; j<N-1; j++) //外循环喜欢N-1次 
	{
		for(int i=0; i<N-j-1; i++ )//内循环喜欢N-j次,因内循环每次把最大值沉到底部,不用N-j次 
		{
			if( A[i] > A[i+1])
			{
				ElementType k = A[i];
				A[i] = A[i+1];
				A[i+1] = k;
			}
		}
	}
	return  A[ N/2 ];
}
