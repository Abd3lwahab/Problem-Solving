import sys

n, m = map(int, input().split())
colors = []
for i in range(n):
    colors.append(input().split())

for row in colors:
    for i in row:
        if (i != 'W' and i != 'B' and i != 'G'):
            print("#Color")
            sys.exit(0)

print("#Black&White")
