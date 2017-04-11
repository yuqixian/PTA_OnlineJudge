#include <stdio.h>  
#include <math.h>  

int main(void)  
{  
    int N;  
    char c;  
    scanf("%d %c", &N,&c);  
    int i=1,j;  
    int n = sqrt((double) (N + 1) / 2);  
    for (i = 1; i <= n; i++)  
    {  
        for (j = 1; j<i; j++)  
            printf(" ");  
        for (j = 2 * (n - i) + 1; j >= 1; j--)  
            printf("%c", c);  
        putchar('\n');  
    }  
    for (i = 1; i <= n - 1; i++)  
    {  
        for (j = 1; j <= n-i-1; j++)  
            printf(" ");  
        for (j = 1; j <= 2 * i + 1; j++)  
            printf("%c", c);  
        putchar('\n');  
    }  
    printf("%d", N - (2 * n*n - 1));  
  
    return 0;  
}  
