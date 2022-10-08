import itertools
import math

N = int(input())
A = list(map(int, input().split()))

ans = -1

for a, b in itertools.combinations(A, 2):
    if (a+b)%2 == 0:
        if a+b > ans:
            ans = a + b

print(ans)