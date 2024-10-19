#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> numbers(n);
    for (int x = 1; x <= n; ++x) {
        numbers.at(x-1) = x;
    }

    int i, j;
    for (int y = 0; y < m; ++y) {
        cin >> i >> j;
        reverse(numbers.begin() + (i - 1), numbers.begin() + j);
    }
    
    for (int z = 0; z < numbers.size(); ++z) {
        cout << numbers.at(z) << ' ';
    }

    return 0;
}