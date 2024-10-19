import math

def extract_digits(number):
    digits = []
    while (number > 0):
        digits.append(number%10)
        number //= 10
    return digits

def find_generator(N):
    start = int(math.sqrt(N))
    for M in range(start, N):
        digit_sum = sum(extract_digits(M))
        decomposition_sum = M + digit_sum

        if (decomposition_sum == N):
            return M
    return 0

N = int(input())
print(find_generator(N))