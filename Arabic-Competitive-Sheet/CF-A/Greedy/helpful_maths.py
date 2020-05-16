st = input()
l = []
for el in st:
    if el.isalnum():
        # Add element in correct position
        index = 0
        for j in range(len(l)):
            index = j + 1
            if int(l[j]) > int(el):
                index -= 1
                break
        l.insert(index, int(el))

# Add addition symbol
result = ['+'] * (len(l) * 2 - 1)
result[0::2] = l

for i in result:
    print(i, end='')
print()