#include<stdio.h>

int main()
{
	int work_hour, work_age;
	float week_salary;
	scanf("%d %d", &work_age, &work_hour);
	if(work_age >= 5)
	{
		week_salary  = 50 * work_hour;
		if (work_hour > 40)	
			week_salary  = 50*40 +50 *1.5* (work_hour-40);
	}
	else 
	{
		week_salary  = 30 * work_hour;
		if (work_hour > 40)	
			week_salary  = 30*40 + 30 *1.5* (work_hour-40);
	}
	printf("%.2f", week_salary);	
	return 0;
}
