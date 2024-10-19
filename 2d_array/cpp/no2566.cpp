#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<deque<int>> matrix(9, deque<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> matrix[i][j];
        }
    }

    int max_value = -1;
    int max_row = -1;
    int max_col = -1;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << max_value << endl;
    cout << max_row + 1 << " " << max_col +1 << endl;

    return 0;
}