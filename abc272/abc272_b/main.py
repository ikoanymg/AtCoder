import itertools

N, M = map(int, input().split())

com = list(itertools.combinations(range(1, N+1), 2))
flag = [False for _ in range(len(com))]

for i in range(M):
    line = list(map(int, input().split()))
    k = line[0]
    x = line[1:]
    for u,v in itertools.combinations(x, 2):
        if (u, v) in com:
            flag[com.index((u, v))] = True

if sum(flag) == len(flag):
    print('Yes')
else:
    print('No')