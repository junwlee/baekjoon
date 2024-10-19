#include <iostream>
#include <deque>

using namespace std;

int digit_sum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += (number % 10);
        number /= 10;
    }

    return sum;
}

int find_generator(int N) {
    for (int M = 1; M < N; ++M) {
        int decomposition_sum = M + digit_sum(M);

        if (decomposition_sum == N) {
            return M;
        }
    }
    return 0;
}

int main() {
    int N;
    cin >> N;

    int result = find_generator(N);

    cout << result << endl;
    return 0;
}