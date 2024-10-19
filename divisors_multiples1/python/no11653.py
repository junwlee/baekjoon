N = int(input())

if N == 1:
    print()
else:
    divisors = []
    x = 2

    while x * x <= N:
        while N % x == 0:
            N //= x
            divisors.append(x)
        x += 1

    if N > 1:
        divisors.append(N)

    for i in range(len(divisors)):
        print(divisors[i])