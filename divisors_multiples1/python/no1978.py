def prime_number_check(num):
    if (num == 1):
        return False
    
    divisors = []
    for i in range(1, num+1):
        if (num % i == 0):
            divisors.append(i)

    if (len(divisors) == 2):
        return True
    else:
        return False

N = int(input())
numbers = list(map(int, input().split()))

primes = []
for num in numbers:
    isPrime = prime_number_check(num)
    if (isPrime):
        primes.append(num)

print(len(primes))