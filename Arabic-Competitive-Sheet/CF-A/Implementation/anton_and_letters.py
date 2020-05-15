n = input()
antonSet = set()
for i in n:
    if i.isalpha():
        antonSet.add(i)
print(len(antonSet))