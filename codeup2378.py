n = int(input())
total_milk = n * 10

min_cows = 1000000000

for i in range(total_milk // 25 + 1):
    remaining = total_milk - i * 25

    j = remaining // 15
    rem_after_j = remaining - j * 15

    if rem_after_j % 10 == 0:
        k = rem_after_j // 10
        min_cows = min(min_cows, i + j + k)

    if j > 0:
        j2 = j - 1
        rem_after_j2 = remaining - j2 * 15
        if rem_after_j2 % 10 == 0:
            k2 = rem_after_j2 // 10
            min_cows = min(min_cows, i + j2 + k2)

print(min_cows)