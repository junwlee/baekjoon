a, b, c, d, e, f = map(int, input().split())
x_ = [i for i in range(-999, 1000, 1)]
y_ = [i for i in range(-999, 1000, 1)]

for x in x_:
    for y in y_:
        if (c == a*x + b*y and f == d*x + e*y):
            print(x, y)