n = int(input())
arr = [list(input()) for i in range(n)]
i, j = 0, n-1
x = arr[0][0]
o = arr[0][1]

no = False
for row in arr:
    if (row[i] != x or row[j] != x):
        no = True
        break
    if (row.count(o) != n - 2 and i != j):
        no = True
        break
    elif (i == j and row.count(o) != n - 1):
        no = True
        break
    i += 1
    j -= 1
    
if no:
    print("NO")
else:
    print("YES")
