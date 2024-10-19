# 1부터 30까지의 출석번호를 가진 학생 목록을 준비
all_students = set(range(1, 31))

# 제출한 학생들의 출석번호를 입력 받음
submitted_students = set()

for _ in range(28):
    submitted_students.add(int(input()))

# 제출하지 않은 학생들을 찾음
missing_students = list(all_students - submitted_students)

# 오름차순으로 정렬 후 출력
missing_students.sort()
print(missing_students[0])
print(missing_students[1])
