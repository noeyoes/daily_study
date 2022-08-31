h, m = map(int, input().split())
t = int(input())

if (m + t < 60 ):
    print("{} {}".format(h, m + t))
    
if (m + t >= 60 and h == 23):
    h = 0
    m = (m + t) % 60
    print("{} {}".format(h, m))
        
if (m + t >= 60 and h != 23):
    h = h + (m + t) // 60
    m = (m + t) % 60
    print("{} {}".format(h, m))
