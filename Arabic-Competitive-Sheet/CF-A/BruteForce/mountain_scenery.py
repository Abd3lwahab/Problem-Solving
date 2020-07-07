n, k = map(int, input().split())
arr = list(map(int, input().split()))
count = 0
z = 2 * n + 1
for i in range(1, z, 2):
    if (arr[i] - 1 > arr[i+1] and arr[i] - 1 > arr[i-1]):
        arr[i] -= 1
        count += 1

    if count == k:
        break

print(*arr)
