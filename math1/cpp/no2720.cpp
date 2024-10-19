#include <iostream>
using namespace std;

int main() {
    int T; // 테스트 케이스의 개수
    cin >> T;

    while (T--) {
        int C; // 거스름돈 (센트)
        cin >> C;

        // 각 동전의 개수
        int quarters = C / 25;   // 쿼터 (25센트)
        C %= 25;                 // 나머지

        int dimes = C / 10;      // 다임 (10센트)
        C %= 10;                 // 나머지

        int nickels = C / 5;     // 니켈 (5센트)
        C %= 5;                  // 나머지

        int pennies = C;         // 페니 (1센트)

        // 결과 출력
        cout << quarters << " " << dimes << " " << nickels << " " << pennies << endl;
    }

    return 0;
}