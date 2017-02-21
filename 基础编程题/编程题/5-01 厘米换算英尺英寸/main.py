#!/usr/bin/env python3
#-*- coding: utf-8 -*-

hight = input()
higt = int(hight)
temp = higt /2.54
foot = int(temp) // 12
inch = int(temp) % 12
print(foot, inch)
