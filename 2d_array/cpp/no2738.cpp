#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    deque<deque<int>> matrix_a(n, deque<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix_a[i][j];
        }
    }

    deque<deque<int>> matrix_b(n, deque<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix_b[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix_a[i][j] + matrix_b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}