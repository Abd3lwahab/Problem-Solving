k, r = map(int,input().split())
count = 1
while True:
    if (k * count) % 10 == 0 or ((k * count) - r) % 10 == 0: 
        break
    count += 1
print(count)