#!/usr/bin/env python3
# from typing import *

N = int(input())

S = "1"

for  i in range(2,N+1):
    S = S + " " + str(i) + " " + S

print(S)