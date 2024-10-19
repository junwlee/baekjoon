# 입력 받기
s = input()

# 알파벳 위치를 저장할 리스트, -1로 초기화
alphabet_positions = [-1] * 26

# 문자열을 순회하면서 각 알파벳의 첫 등장 위치 저장
for i, ch in enumerate(s):
    index = ord(ch) - ord('a')  # 알파벳의 인덱스 계산
    if alphabet_positions[index] == -1:
        alphabet_positions[index] = i

# 결과 출력
print(' '.join(map(str, alphabet_positions)))
