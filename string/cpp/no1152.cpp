#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 공백을 포함한 한 줄 입력 받기
    string sentence;
    getline(cin, sentence);

    // istringstream을 사용하여 공백을 기준으로 단어를 분리
    istringstream iss(sentence);
    string word;

    vector<string> s;
    while (iss >> word) {
        s.push_back(word);
    }
    cout << s.size() << "\n";
    return 0;
}