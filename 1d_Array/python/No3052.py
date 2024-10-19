import sys
from collections import Counter

division = []
for _ in range(10):
    num = int(sys.stdin.readline())
    division.append(num % 42)
elem_counts = Counter(division)
print(len(list(elem_counts.keys())))