#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int x_to_w = w - x;
    int y_to_h = h - y;

    int x_to_zero = x;
    int y_to_zero = y;

    deque<int> results;
    results.push_back(x_to_w);
    results.push_back(y_to_h);
    results.push_back(x_to_zero);
    results.push_back(y_to_zero);

    cout << *min_element(results.begin(), results.end()) << endl; 
    
    return 0;
}