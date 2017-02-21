#!/usr/bin/env python3
# coding:utf-8

num = input()
num = int(num)
temp = num//100 + num%100//10*10 + num%10*100
print(temp)
