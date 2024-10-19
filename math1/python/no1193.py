def find_fraction(X):
    n = 1  # 그룹 번호 # 각 그룹에 포함된 분수 개수
    
    # X가 포함된 그룹 찾기
    while X > n:
        X -= n
        n += 1

    # 홀수 그룹일 때: 분수가 작아짐 (분자부터 시작)
    if n % 2 == 1:
        numerator = n - X + 1
        denominator = X
    # 짝수 그룹일 때: 분수가 커짐 (분모부터 시작)
    else:
        numerator = X
        denominator = n - X + 1

    print(f"{numerator}/{denominator}")

X = int(input())
find_fraction(X)