import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

k = I()
num = k

for i in range(1, k+1):
    if num % i:
        pass
    else:
        num /= i
    if num == 1:
        print(i)
        break
        