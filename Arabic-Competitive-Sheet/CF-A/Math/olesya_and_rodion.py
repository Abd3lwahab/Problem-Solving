n, t = map(int, input().split())

if t % 10 == 0:
    zeros = n - 2
else:
    zeros = n - 1

if n == 1 and t == 10:
    print(-1)
    exit(0)

x = t
for i in range(zeros):
    x = x * 10

print(x)