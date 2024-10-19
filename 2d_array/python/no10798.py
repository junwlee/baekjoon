letters = []
for _ in range(5):
    letter = list(input())
    letters.append(letter)

# 최대 15줄까지 가능하므로, 15번까지 순회
for i in range(15):
    for j in range(5):
        if i < len(letters[j]):  # 현재 줄의 길이를 넘지 않는 경우에만 출력
            print(letters[j][i], end='')