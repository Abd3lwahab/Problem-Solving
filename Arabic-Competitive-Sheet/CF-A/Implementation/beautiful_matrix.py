matrix = [input().strip().split() for i in range(5)]
 
for i in range(5):
    for j in range(5):
        if matrix[i][j] == "1":
            row,col = i, j
print(abs(2 - row) + abs(2 - col))