#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int diagonal = 1; // 대각선 번호
    int sum = 1; // 1번째 대각선까지의 분수 개수 합
    
    // X가 속한 대각선 찾기
    while (sum < X) {
        diagonal++;
        sum += diagonal;
    }

    // 현재 대각선에서 몇 번째 위치인지 계산
    int offset = sum - X; // offset: 대각선의 마지막 분수에서부터 X까지의 거리

    // 홀수 대각선은 아래에서 위로, 짝수 대각선은 위에서 아래로
    if (diagonal % 2 == 0) {
        cout << diagonal - offset << "/" << 1 + offset << endl;
    } else {
        cout << 1 + offset << "/" << diagonal - offset << endl;
    }

    return 0;
}