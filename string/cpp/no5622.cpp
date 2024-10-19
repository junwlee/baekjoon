#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int num = 0;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            num += 3;
        } else if (ch == 'D' || ch == 'E' || ch == 'F') {
            num += 4;
        } else if (ch == 'G' || ch == 'H' || ch == 'I') {
            num += 5;
        } else if (ch == 'J' || ch == 'K' || ch == 'L') {
            num += 6;
        } else if (ch == 'M' || ch == 'N' || ch == 'O') {
            num += 7;
        } else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
            num += 8;
        } else if (ch == 'T' || ch == 'U' || ch == 'V') {
            num += 9;
        } else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            num += 10;
        }
    }

    cout << num << "\n";

    return 0;
}