gift = int(input())
spent = int(input())
money = gift - spent
list = [500, 100, 50, 10]

count = 0
for i in list:
    take = money // i
    count += take
    money -= take * i
print(count)