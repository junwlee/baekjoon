#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isGroupWord(const string &word) {
    vector<bool> alphabet(26, false);
    char prev = '\0';

    for (char c : word) {
        if (c != prev) {
            if (alphabet[c - 'a']) {
                return false;
            }
            alphabet[c - 'a'] = true;
        }
        prev = c;
    }
    return true;

}

int main() {
    int N;
    cin >> N;

    int groupWordCount = 0;

    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        if (isGroupWord(word)) {
            groupWordCount++;
        }
    }
    cout << groupWordCount << endl; // 그룹 단어의 개수 출력
    
    return 0;
}