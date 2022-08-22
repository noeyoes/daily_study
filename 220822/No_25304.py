from os import times


total_amount = int(input())
times = int(input())

for i in range(times):
    amount, units = input().split()
    amount, units = int(amount), int(units)

    total_amount -= (amount*units)

if total_amount == 0:
    print("Yes")
else:
    print("No")