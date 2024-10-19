#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 체스 세트에서 각 피스의 올바른 개수
    vector<int> correct_pieces = {1, 1, 2, 2, 2, 8};
    
    // 입력받을 피스의 개수
    vector<int> found_pieces(6);
    
    // 입력 받기
    for (int i = 0; i < 6; ++i) {
        cin >> found_pieces[i];
    }
    
    // 차이를 계산하여 출력
    for (int i = 0; i < 6; ++i) {
        cout << correct_pieces[i] - found_pieces[i] << " ";
    }
    
    return 0;
}
