n = int(input())
lst = []

for i in range(n):
    a, b = map(int, input().split())
    lst.extend([a, b])
    print("Case #{}: {} + {} = {}".format(i+1, a, b, a+b))