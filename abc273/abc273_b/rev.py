import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

x, k = LI()
pow10 = 1

for i in range(k):
    x /= pow10
    m = x % 10
    if m <= 4: x -= m
    else: x += 10 - m
    x *= pow10
    pow10 *= 10
    
print(int(x))
