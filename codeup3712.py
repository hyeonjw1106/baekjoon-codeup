n = int(input())

if n % 3 == 0:
    n = n//3
    s = 1
    for i in range(n):
        s *= 2
        s %= 100000007
    print(s)
else:
    print(0)