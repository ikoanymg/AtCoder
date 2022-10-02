from collections import deque

N = int(input())
A = list(map(int, input().split()))

#A.sort()
deq = deque(A)
#print(list(deq))
cnt = 0
while cnt < N+1:
    if deq[0] == cnt+1:
        deq.popleft()
        cnt += 1
    else:
        if len(deq) > 2:
            deq.pop()
            deq.pop()
            deq.appendleft(cnt+1)
        else:
            break
#    print(list(deq))
print(cnt)