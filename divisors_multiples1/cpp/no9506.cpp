#include <iostream>
#include <deque>
#include <string> // to_string
#include <numeric> // accumulate
#include <sstream> // ostringstream

using namespace std;

string is_perfect_number(int n) {
    deque<int> divisors;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    // 약수들의 합을 계산하고, 완전수인지 확인
    if (accumulate(divisors.begin(), divisors.end(), 0) == n) {
        ostringstream oss;
        oss << n << " = ";

        // divisors의 요소들을 문자열로 변환하고 " + "로 연결
        for (size_t i = 0; i < divisors.size(); ++i) {
            oss << divisors[i];
            if (i != divisors.size() - 1) { // 마지막 요소가 아니라면
                oss << " + ";
            }
        }
        return oss.str();
    } else {
        return to_string(n) + " is NOT perfect.";
    }
}

int main() {
    int n;
    while (cin >> n) { // 숫자를 입력받음
        if (n == -1) { // -1이 입력되면 종료
            break;
        }
        cout << is_perfect_number(n) << endl; // 완전수 판별 결과 출력
    }
    return 0;
}
