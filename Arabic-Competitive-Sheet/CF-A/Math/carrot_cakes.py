import math
n, t, k, d = map(int, input().split())

times = math.ceil(n / k)
totalWithOut = times * t
totalWith = t + d

if totalWith < totalWithOut:
    print("YES")
else:
    print("NO")