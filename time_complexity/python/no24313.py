# 입력 받기
a1, a0 = map(int, input().split())
c = int(input())
n0 = int(input())

def check_big_o(a1, a0, c, n0):
    for n in range(n0, 101):
        if (a1 * n + a0 > c * n):
            return 0
    return 1
    
print(check_big_o(a1, a0, c, n0))