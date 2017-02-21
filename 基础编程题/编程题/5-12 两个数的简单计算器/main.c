#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %c %d",&a, &c, &b);
	switch(c){
		case '+': printf("%d", a + b);	break;
		case '-': printf("%d", a - b);	break;
		case '*': printf("%d", a * b);	break;
		case '%': printf("%d", a % b);	break;
		case '/': printf("%d", a / b);	break;
		default : printf("ERROR");
	}
	return 0;
}
