x, y, z = map(int, input().split())

if x < 0:
    x *= -1
    y *= -1
    z *= -1

ans = -1

if y < 0:
    ans = x
else:
    if y < x:
        if z < y:
            if z < 0:
                ans = 2*abs(z) + x
            else:
                ans = x

print(ans)
