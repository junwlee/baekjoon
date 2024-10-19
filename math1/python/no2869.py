import math

def days_to_reach_top(A, B, V):
    # 마지막 날 미끄러지지 않으므로 V에서 B를 뺀 값을 사용
    return math.ceil((V - B) / (A - B))

A, B, V = map(int, input().split())

print(days_to_reach_top(A, B, V))