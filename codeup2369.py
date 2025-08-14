a, b, c = map(int, input().split())
needed = [40, 50, 30]
max_bibimbap = min(a // needed[0], b // needed[1], c // needed[2])
print(max_bibimbap)