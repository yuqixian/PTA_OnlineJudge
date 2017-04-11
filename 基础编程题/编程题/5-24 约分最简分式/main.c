#include<stdio.h>

int main()
{
	int t, flag = 0;
	int turtle, rabbit;
	
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		turtle += 3;
		if( flag==0 && i%10 ==0 && rabbit>turtle)
			flag = 30;
		if(flag == 0)	rabbit += 9;
		else	flag--;
	}
	
	if (turtle > rabbit)	printf("@_@ %d", turtle);
	else if (turtle < rabbit) printf("^_^ %d", rabbit);
	else 	printf("-_- %d", rabbit);
	
	return 0;
}
