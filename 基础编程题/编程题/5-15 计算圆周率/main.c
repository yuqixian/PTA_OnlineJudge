#include<stdio.h>

int main()
{
	int n=1;
	double pi_2=1.0, fm=1.0, fz=1.0;
	double gateVa;
	scanf("%lf", &gateVa);

	while( fz / fm >= gateVa)
	{
		fz *= 1.0*n;
		fm *= (2*n+1.0);
		n++;
		pi_2 += fz / fm;
	}

	printf("%.6lf", pi_2*2);
	return 0;
}
