#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    for (int x = -999; x < 1000; x++) {
        for (int y = -999; y < 1000; y++) {
            if (c == a*x + b*y && f == d*x + e*y) {
                cout << x << " " << y << endl;
            }
        }
    }
    return 0;
}