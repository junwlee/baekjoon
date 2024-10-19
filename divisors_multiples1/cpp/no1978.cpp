#include <iostream>
#include <deque>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    for (int i = 3; i <= sqrt(num); i+=2) {
        if (num % i == 0) return false; 
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    deque<int> numbers(N);
    int num;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    int prime_count=0;
    for (int n: numbers) {
        if (is_prime(n)) {
            prime_count+=1;
        }
    }

    cout << prime_count << endl;
    return 0;
}