s = input()
i = 0
for c in s:
    x = int(c)
    if (x > 4):
        if (i == 0 and x == 9):
            print(c, end='')
        else:
            print(9 - x, end='')
    else:
        print(c, end='')
    i += 1

print()
