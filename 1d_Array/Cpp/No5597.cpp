#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    bool allStudents[31] = { false };
    int submittedStudents;
    for (int i = 0; i < 28; ++i) {
        cin >> submittedStudents;
        allStudents[submittedStudents] = true;
    }

    int missingStudents[2];
    int idx = 0;
    for (int i = 1; i <= 30; ++i) {
        if (!allStudents[i]) {
            missingStudents[idx++] = i;
            if (idx == 2) {
                break;
            }
        }
    }

    cout << missingStudents[0] << "\n";
    cout << missingStudents[1] << "\n";

    return 0;
}
