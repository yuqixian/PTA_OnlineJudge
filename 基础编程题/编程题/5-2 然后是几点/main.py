#!/usr/bin/env python3
# coding: utf-8

temp = input()
lst = temp.split(' ')
hour = int(lst[0])
min = int(lst[1])
temp = hour//100*60 + hour%100 + min
temp = temp//60*100 + temp%60
print(temp)
