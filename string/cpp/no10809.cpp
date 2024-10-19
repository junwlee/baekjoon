#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    // 알파벳의 위치를 저장할 배열, 처음엔 모두 -1로 초기화
    vector<int> numbers(26, -1);

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];
        int idx = ch - 'a';
        if (numbers[idx] == -1) {
            numbers[idx] = i;
        }
    }

    for (int j = 0; j < numbers.size(); ++j) {
        cout << numbers[j] << ' ';
    }

    return 0;
}