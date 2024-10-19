x, y, w, h = map(int, input().split())

y_to_h = h - y
x_to_w = w - x

x_to_zero = x - 0
y_to_zero = y - 0

results = [y_to_h, x_to_w, x_to_zero, y_to_zero]
print(min(results))