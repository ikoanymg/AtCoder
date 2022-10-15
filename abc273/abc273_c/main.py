N = int(input())
A = list(map(int, input().split()))

setA = set(A)

list_i = [sum(x>a for x in setA) for a in A]

for i in range(N):
    ans = sum(x==i for x in list_i)
    print(ans)