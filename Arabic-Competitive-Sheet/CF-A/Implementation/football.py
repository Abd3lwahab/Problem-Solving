n = int(input())
arr = [input() for i in range(n)]

win = arr[0]
for i in arr:
    if arr.count(i) > arr.count(win):
        win = i

print(win)
