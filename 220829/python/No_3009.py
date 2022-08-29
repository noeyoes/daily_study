x_point = []
y_point = []

for i in range(3):
    x, y = map(int, input().split())
    x_point.append(x)
    y_point.append(y)

for k in range(3):
    if x_point.count(x_point[k]) == 1:
        x4 = x_point[k]
    if y_point.count(y_point[k]) == 1:
        y4 = y_point[k]

print(x4, y4)