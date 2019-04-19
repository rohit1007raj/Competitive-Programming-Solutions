#!/bin/python3

import math
import os
import random
import re
import sys
x=input().split()
arr=[]
for i in x:
    arr.append(int(i))
N=arr[0]
K=arr[1]
q=input().split()
T=[]
for i in q:
    T.append(int(i))


cnt = 0 # special problems
i = 0   # chapter number
j = 1   # page number
m = 1   # problem number

while i < N:
    if m <= j and j <= min(m + K - 1, T[i]):
        cnt += 1
    j += 1
    m += K
    if m > T[i]: # next chapter
        i += 1
        m = 1
print(cnt)
        
    

        
    
    



