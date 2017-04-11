#include<stdio.h>
#include<math.h>

int IsTheNumber(const int N);

int main()
{
	 int n1, n2, i, cnt;
				
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);
    
	return 0;
}

int IsTheNumber(const int N)
{
	int flag = 0 ;
	int k, m, temp;
	 m = N;	
	k = (int) sqrt(N);
	if(k*k == N)
	{
		int a[10]={0}; //这里应该定义num的长度为10，因为传入的整数的每位数可能是0~~9，而不是传入数的位数。
		while( m>0)
		{
			temp = m%10; 
			for(int i=0; i<10; i++) //遍历N的每一位上的数字，在相应的数组中自加 如果有一个数组元素等于2 说明至少有2个位上的数相同
			{
				if(temp == i) 
					a[i]++;
				if(a[i] == 2)
				{
					flag = 1;
					break;
				}
			}
			
			if( flag )	break;
			m /= 10;
		}
	}
	
	return flag;
}

