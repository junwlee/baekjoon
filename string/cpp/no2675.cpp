#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int r;
        string s;
        cin >> r >> s;

        for (const char ch : s) {
            for (int i = 0; i < r; ++i) {
                cout << ch;
            }
        }
        cout << "\n";
    }
    

    return 0;
}