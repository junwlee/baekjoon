def calculate_the_area(n, positions):
    canvas = [
        [0] * 100 for _ in range(100)
    ]

    for x, y in positions:
        for i in range(x, x+10):
            for j in range(y, y+10):
                canvas[i][j] = 1
    
    black_area = sum(sum(row) for row in canvas)

    return black_area

n = int(input())
positions = []
for _ in range(n):
    x, y = map(int, input().split())
    positions.append((x,y))
result = calculate_the_area(n, positions)
print(result)