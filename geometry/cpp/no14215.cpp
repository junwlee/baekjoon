#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sticks[3] = {a, b, c};
    sort(sticks, sticks+3, greater<int>());

    if (sticks[0] >= sticks[1] + sticks[2]) {
        sticks[0] = sticks[1] + sticks[2] - 1;
    }

    int perimeter=0;
    for (int i = 0; i < 3; ++i) {
        perimeter += sticks[i];
    }
    cout << perimeter << endl;
    
    return 0;
}