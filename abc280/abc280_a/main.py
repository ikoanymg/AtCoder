import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

h, w = LI()

cnt = 0

for i in range(h):
    s = S()
    for c in s:
        if c == '#': cnt += 1
    
print(cnt)
