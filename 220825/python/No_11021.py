T = int(input())
lst = []

for i in range(T):
    a, b = map(int, input().split())
    lst.append(a+b)

for i in range(0, T):
    print("Case #%d:" %(i+1), lst[i])