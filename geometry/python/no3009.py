c1 = tuple(map(int, input().split()))
c2 = tuple(map(int, input().split()))
c3 = tuple(map(int, input().split()))

# x와 y 좌표를 각각 리스트로 따로 저장
x_list = [c1[0], c2[0], c3[0]]
y_list = [c1[1], c2[1], c3[1]]

# x 좌표 중 하나만 등장하는 값을 찾음
if x_list.count(x_list[0]) == 1:
    x4 = x_list[0]
elif x_list.count(x_list[1]) == 1:
    x4 = x_list[1]
else:
    x4 = x_list[2]

# y 좌표 중 하나만 등장하는 값을 찾음
if y_list.count(y_list[0]) == 1:
    y4 = y_list[0]
elif y_list.count(y_list[1]) == 1:
    y4 = y_list[1]
else:
    y4 = y_list[2]

# 네 번째 좌표 출력
print(x4, y4)