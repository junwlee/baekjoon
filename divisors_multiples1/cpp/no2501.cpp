#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N,K;
    cin >> N >> K;

    deque<int> divisors;
    for (int i = 1; i <= static_cast<int>(sqrt(N)); ++i) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N / i) {
                divisors.push_back(N / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if ( K > divisors.size()) {
        cout << 0 << endl;
    } else {
        cout << divisors[K - 1] << endl;
    }

    return 0;
}