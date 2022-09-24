a = list(map(int, input().split()))

c = [False, False, False]

if 1 in a:
    c[0] = True
if 2 in a:
    c[1] = True
if 4 in a:
    c[2] = True

if 3 in a:
    c[0] = True
    c[1] = True
if 5 in a:
    c[0] = True
    c[2] = True
if 6 in a:
    c[1] = True
    c[2] = True
if 7 in a:
    c[0] = True
    c[1] = True
    c[2] = True


ans = 0
if c[0]:
    ans += 1
if c[1]:
    ans += 2
if c[2]:
    ans += 4


print(ans)