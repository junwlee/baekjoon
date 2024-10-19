def main():
    sum_of_divisors()

def sum_of_divisors():
    while True:
        n = int(input())
        if n == -1:
            break
        else:
            divisors = []
            for i in range(1, n):
                if n % i == 0:
                    divisors.append(i)

            if sum(divisors) == n:
                print("{0} =".format(n), end=' ')
                for d in divisors:
                    print(d, end=' ')
                    if d != divisors[-1]:
                        print("+", end=' ')
            else:
                print("{0} is NOT perfect.".format(n))

main()