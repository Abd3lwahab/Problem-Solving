from sys import exit
from math import sqrt


def main():
    x, y = map(int, input().split())
    for i in range(x+1, y):
        if isprime(i):
            print("NO")
            exit(0)
    if (isprime(y)):
        print("YES")
    else:
        print("NO")


def isprime(n):
    if n == 1 or n == 2:
        return True
    for i in range(2, round(sqrt(n))+1):
        if n % i == 0:
            return False
    return True


main()
