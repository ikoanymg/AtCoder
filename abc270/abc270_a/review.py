### 各問をbitとして整数（点数）のORを取るだけ
### 1, 2, 4点はそういうこと
a, b = map(int, input().split())
print(a|b)