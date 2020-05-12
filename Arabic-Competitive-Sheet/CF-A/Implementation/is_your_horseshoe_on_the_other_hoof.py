arr = list(map(int, input().split()))
dis = set(arr)
print(len(arr) - len(dis))