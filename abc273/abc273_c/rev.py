import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

n = I()
a = LI()

mp = collections.Counter(a)
mp = sorted(mp.items(), reverse=True)

for x in mp:
    print(x[1])

for _ in [0]*(n-len(mp)):
    print(0)
