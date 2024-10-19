while True:
    a, b = map(int, input().split())
    
    # 두 숫자가 0이면 종료
    if a == 0 and b == 0:
        break

    # a가 b의 약수인지 확인
    if b % a == 0:
        print("factor")
    
    # b가 a의 배수인지 확인
    elif a % b == 0:
        print("multiple")
    
    # 둘 다 아니면
    else:
        print("neither")