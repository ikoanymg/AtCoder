
N, Q = map(int, input().split())

L = []
for i in range(N):
    L.append(list(map(int, input().split())))


query = []
for j in range(Q):
    query = list(map(int, input().split()))
    print(L[query[0]-1][query[1]])