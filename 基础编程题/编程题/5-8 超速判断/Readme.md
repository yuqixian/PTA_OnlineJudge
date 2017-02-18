##5-8 超速判断  
模拟交通警察的雷达测速仪。输入汽车速度，如果速度超出60 mph，则显示“Speeding”，否则显示“OK”。

###输入格式：

输入在一行中给出1个不超过500的非负整数，即雷达测到的车速。

###输出格式：

在一行中输出测速仪显示结果，格式为：`Speed: V - S`，其中V是车速，`S`或者是`Speeding`、或者是`OK`。

##C
	#include<stdio.h>
	
	int main()
	{
		int speed;
		scanf("%d", &speed);
		if(speed > 60 )
			printf("Speed: %d - Speeding", speed);
		else 
			printf("Speed: %d - OK", speed);
		return 0;
	}