def find_min_steps(N):
    if N == 1:
        return 1
    
    layer = 1
    count = 1
    while N > count:
        count += 6 * layer
        layer += 1

    return layer

N = int(input())

print(find_min_steps(N))