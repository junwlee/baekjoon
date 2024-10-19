#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int s_1, s_2;
    s_1 = stoi(s1);
    s_2 = stoi(s2);

    int maxVal;
    maxVal = max(s_1, s_2);

    cout << maxVal << "\n";

    return 0;
}