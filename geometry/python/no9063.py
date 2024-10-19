N = int(input())
if N == 1:
    print(0)
else:
    x_coords = []
    y_coords = []
    for _ in range(N):
        x, y = map(int, input().split())
        x_coords.append(x)
        y_coords.append(y)
    
    width = max(x_coords) - min(x_coords)
    height = max(y_coords) - min(y_coords)

    print(width * height)