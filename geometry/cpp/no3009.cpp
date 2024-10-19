#include <iostream>
#include <deque>
#include <algorithm> // count

using namespace std;

int main() {
    deque<int> x_coords;
    deque<int> y_coords;

    int x, y;
    for (int i = 0; i < 3; ++i) {
        cin >> x >> y;
        x_coords.push_back(x);
        y_coords.push_back(y);
    }

    int x4, y4;

    for (int i = 0; i < x_coords.size(); ++i) {
        if (count(x_coords.begin(), x_coords.end(), x_coords[i]) == 1) {
            x4 = x_coords[i];
            break;
        }
    }

    for (int i = 0; i < y_coords.size(); ++i) {
        if (count(y_coords.begin(), y_coords.end(), y_coords[i]) == 1) {
            y4 = y_coords[i];
            break;
        }
    }

    cout << x4 << " " << y4 << endl;

    return 0;
}