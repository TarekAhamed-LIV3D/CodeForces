# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 14:45:01 2020

@author: tarek
"""
def main():
    n = int(input())
    words = []
    for _ in range(n):
        words.append(input())
    for word in words:
        if len(word)>10:
            print(word[0]+str(len(word)-2)+word[-1])
        else:
            print(word)
if __name__ == "__main__"    :
    main()