import sys

S = input()
ans = 1
for c in S:
    if c.islower():
        ans += 1
    else:
        print(ans)