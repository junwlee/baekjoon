groups = []
while (True):
    a, b, c = map(int, input().split())
    if (a == 0 and b == 0 and c == 0):
        break
    groups.append([a, b, c])

for lst in groups:
    max_val = max(lst)
    lst.remove(max_val)
    if (max_val >= sum(lst)):
        print("Invalid")
        continue

    lst.append(max_val)
    if (lst[0] == lst[1] == lst[2]):
        print("Equilateral")
    elif (lst[0] == lst[1] or lst[0] == lst[2] or lst[2] == lst[1]):
        print("Isosceles")
    elif (lst[0] != lst[1] != lst[2]):
        print("Scalene")