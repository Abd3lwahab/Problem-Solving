from sys import exit

l, r = map(int, input().split())

if (r-l <= 1):
    print("-1")
    exit(0)
else:
    if (l % 2 != 0):
        l += 1

    if (r-l <= 1):
        print(-1)
        exit(0)

    print(l, l+1, l+2)
