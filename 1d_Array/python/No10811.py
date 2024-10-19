import sys

n, m = map(int, sys.stdin.readline().split())
numbers = list(range(1, n+1))

for _ in range(m):
    i, j = map(int, sys.stdin.readline().split())
    numbers[i-1:j] = numbers[i-1:j][::-1]
print(' '.join(map(str, numbers)))