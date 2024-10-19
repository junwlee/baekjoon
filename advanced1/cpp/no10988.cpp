#include <iostream>
#include <string>

using namespace std;

int main() {
    string original;
    cin >> original;

    string reversed(original.rbegin(), original.rend());

    if (original == reversed) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
