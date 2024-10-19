#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += s[i] - '0'; // 문자 '0'을 빼서 정수로 변환
    }

    cout << sum << endl;

    return 0;
}