import sys
import math

N = int(input())
X = list(map(int, input().split()))

X.sort()

X = X[N:4*N]

print((sum(X)/3/N))