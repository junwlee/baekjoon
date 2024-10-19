a, b, c = map(int, input().split())
numbers = [a, b, c]
max_val = max(numbers)
numbers.remove(max_val)
while(sum(numbers) <= max_val):
    max_val -= 1
numbers.append(max_val)
print(sum(numbers))