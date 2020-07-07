n, m = map(int, input().split())
mini, maxi = min(n, m), max(n, m)
count = 0
for i in range(1, mini + 1):
    count += (i + maxi) // 5 - (i // 5)
print(count)
