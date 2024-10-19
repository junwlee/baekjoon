N, M = map(int, input().split())
numbers = list(map(int, input().split()))

max_sum = 0
for i in range(N-2):
    for j in range(i+1, N-1):
        for k in range(j+1, N):
            current_sum = numbers[i] + numbers[j] + numbers[k]

            if current_sum <= M:
                max_sum = max(max_sum, current_sum)

print(max_sum)