n, m, a = map(int, input().split())
ren, rem = n, m

if (n % a != 0):
    ren = (n + a) - (n % a)
if (m % a != 0):
    rem = (m + a) - (m % a)

print((ren * rem) // (a * a))
