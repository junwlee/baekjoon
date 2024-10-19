#include <iostream>
#include <deque>
#include<utility> // pair
#include <numeric> // acuumulate

using namespace std;

int calculate_the_area(int n, deque<pair<int, int>> positions) {
    deque<deque<int>> canvas(100, deque<int>(100, 0));

    for (auto [x, y] : positions) {
        for (int i = x; i < x + 10; ++i) {
            for (int j = y; j < y + 10; ++j) {
                canvas[i][j] = 1;
            }
        }
    }

    int black_area = 0;
    for (const auto &row : canvas) {
        black_area += accumulate(row.begin(), row.end(), 0);
    }

    return black_area;
}

int main() {
    int n;
    cin >> n;
    
    deque<pair<int, int>> positions;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        positions.emplace_back(x, y);
    }

    cout << calculate_the_area(n, positions) << endl;
    
    return 0;

}