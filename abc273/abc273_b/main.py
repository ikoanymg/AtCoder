from decimal import Decimal, ROUND_HALF_UP, ROUND_HALF_EVEN

X, K = map(int, input().split())

if X/(10**K) <  .1: print(0)
else:
    for i in range(K):
        X = Decimal(str(X)).quantize(Decimal('1E'+str(i+1)), rounding=ROUND_HALF_UP)

    print(int(X)) 