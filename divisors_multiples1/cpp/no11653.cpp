#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << endl;
    } else {
        deque<int> divisors;
        int x = 2;

        while (x * x <= N) {
            while (N % x == 0) {
                N /= x;
                divisors.push_back(x);
            }
            x += 1;
        }

        if (N > 1) {
            divisors.push_back(N);
        }

        for (int i = 0; i < divisors.size(); i++) {
            cout << divisors[i] << endl;
        }
    }
    return 0;
}