#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> numbers;
    int num;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    int max_sum = 0;
    int current_sum;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i +1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                current_sum = numbers[i] + numbers[j] + numbers[k];

                if (current_sum <= M) {
                    max_sum = max(current_sum, max_sum);
                }
            }
        }
    }

    cout << max_sum << endl;
    return 0;
}