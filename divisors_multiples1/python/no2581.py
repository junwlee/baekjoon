def prime_check(number: int):
    if (number <= 1):
        return False
    if (number == 2):
        return True
    if (number % 2 == 0):
        return False
    
    for i in range(3, int(number**0.5)+1, 2):
        if (number % i == 0):
            return False
    
    return True

M = int(input())
N = int(input())

primes = []
for i in range(M, N+1):
    if (prime_check(i)):
        primes.append(i)

if (len(primes) >= 1):
    print(sum(primes))
    print(primes[0])
else:
    print(-1)