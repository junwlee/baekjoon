#include <iostream>
#include <deque>
#include <cmath>
#include <iterator>

using namespace std;

deque<int> sieveOfEratosthenes(int n) {
    deque<bool> sieve(n+1, true);
    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i <= sqrt(n); ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }

    deque<int> primes;
    for (int i = 0; i < sieve.size(); ++i) {
        if (sieve[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int N;
    cin >> N;

    deque<int> result = sieveOfEratosthenes(N);

    copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}