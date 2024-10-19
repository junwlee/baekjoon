#include <iostream>
#include <string>
#include <cctype> // toupper

using namespace std;

int main() {
    string word;
    cin >> word;

    // 알파벳 빈도 수를 저장할 배열 초기화
    int freq[26] = {0};

    // 단어의 각 문자에 대한 빈도 수 계산
    for (char c : word) {
        c = toupper(static_cast<unsigned char>(c));
        freq[c - 'A']++; // A'부터 시작하는 인덱스를 계산
    }

    int max_freq = 0; // 가장 높은 빈도 수를 저장
    int max_index = -1; // 가장 많이 등장한 알파벳의 인덱스를 저장
    bool is_duplicate = false; // 최대 빈도 수의 알파벳이 여러 개인지 확인하는 플래그

    for (int i = 0; i < 26; ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_index = i;
            is_duplicate = false;
        } else if (freq[i] == max_freq) {
            is_duplicate = true;
        }
    }

    if (is_duplicate) { // 최대 빈도 수의 알파벳이 여러 개인 경우
        cout << '?';
    } else { // 유일한 최대 빈도 수의 알파벳이 있는 경우
        cout << static_cast<char>('A' + max_index);
    }

    return 0;
}
