matrix = []
for _ in range(9):
    row = list(map(int, input().split()))
    matrix.append(row)

dict = {}
for idx, row in enumerate(matrix):
    dict[idx] = row

max_key = None
max_value = float('-inf')  # 가장 작은 값으로 초기화
max_index = None

for key, value in dict.items():
    current_max_value = max(value)
    current_max_index = value.index(current_max_value)

    if current_max_value > max_value:
        max_value = current_max_value
        max_key = key
        max_index = current_max_index

print(max_value)
print(max_key+1, max_index+1)