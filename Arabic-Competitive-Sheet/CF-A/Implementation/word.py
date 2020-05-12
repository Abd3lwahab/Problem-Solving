word = input()
upper, lower = 0, 0
for c in word:
    if c.isupper():
        upper += 1
    else:
        lower += 1

if (upper > lower):
    print(word.upper())
else:
    print(word.lower())