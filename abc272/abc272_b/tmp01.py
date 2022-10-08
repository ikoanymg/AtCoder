import itertools

N, M = map(int, input().split())

mat = [[False for _ in range(N)] for _ in range(N)]
com = []

for i in range(M):
    line = list(map(int, input().split()))
    k = line[0]
    x = line[1:]
    att = tuple(itertools.combinations(x, 2))
    com.append(att)

for u,v in itertools.combinations_with_replacement(range(N),2):
    print((u+1,v+1))
    if u == v:
        mat[u][v] = True
    if (u+1, v+1) in com:
        mat[u][v] = True

if False in mat:
    print('No')
else:
    print('Yes')

print(com)

print(mat)
    
        

