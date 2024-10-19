#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    cin >> i;

    char start, end;
    for (int x = 0; x < i; ++x) {
        string s;
        cin >> s;
        start = s.front();
        end = s.back();
        cout << start << end << "\n";
    }

    return 0;
}