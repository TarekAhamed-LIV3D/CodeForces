# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 11:57:12 2020

@author: tarek
"""

w = int(input())
if (2 < w <= 100):
    if( w%2 == 0 ):
        print("YES")
    else:
        print("NO")
else:
    print("NO")