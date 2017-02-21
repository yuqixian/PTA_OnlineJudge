##5-3 逆序的三位数   
程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。

###输入格式：

每个测试是一个3位的正整数。

###输出格式：

输出按位逆序的数。

###输入样例：

	123
###输出样例：

	321

###C
	#include<stdio.h>
	
	int main()
	{
		int num,temp;
		scanf("%d", &num);
		temp = num/100 + num%100/10*10 + num%10*100;
		printf("%d", temp);
		return 0;
	}


###Python 
	#!/usr/bin/env python3
	# coding:utf-8
	
	num = input()
	num = int(num)
	temp = num//100 + num%100//10*10 + num%10*100
	print(temp)
