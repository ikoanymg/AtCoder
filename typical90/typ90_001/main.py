import bisect,collections,copy,heapq,itertools,math,numpy,string
import sys
def I(): return int(sys.stdin.readline().rstrip())
def LI(): return list(map(int,sys.stdin.readline().rstrip().split()))
def S(): return sys.stdin.readline().rstrip()
def LS(): return list(sys.stdin.readline().rstrip().split())

N, L = LI()
K  = I()
A = LI()


def solver(M):
    cnt = 0
    pre = 0
    for i in range(1, N+1):
        if A[i] - pre >= M and L - A[i] >= M:
            cnt += 1
            pre = A[i]
    if cnt >= K:
        return true
    else:
        return false
    

left = -1
right = L + 1
while right - left > 1:
    mid = left + (right - left) /2
    if solver(mid) == false:
        right = mid
    else:
        left = mid
    print(left)