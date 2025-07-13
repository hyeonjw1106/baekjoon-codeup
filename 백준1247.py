for i in range(3):
    n_sum = 0
    n = int(input())
    for j in range(n):
        p = int(input())
        sum += p
    if n_sum > 0:
        print("+")
    elif n_sum < 0:
        print("-")
    else:
        print("0")
