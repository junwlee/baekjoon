#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> sentences(20);
    string line;

    // 평점에 따른 점수를 맵으로 저장
    map<string, double> gradeToPoint = {
        {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
        {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
        {"F", 0.0}
    };

    double totalScore = 0.0;
    double totalCredits = 0.0;

    for (int i = 0; i < 20; i++) {
        getline(cin, sentences[i]);
    }

    for (const auto& input : sentences) {
        stringstream ss(input);
        string subject, grade;
        double credit;

        ss >> subject >> credit >> grade;

        if (grade == "P") {
            continue;  // P는 계산에서 제외
        }

        // 과목별 (학점 × 평점) 합산
        totalScore += credit * gradeToPoint[grade];
        totalCredits += credit;  // 학점 합산
    }

    // 전공평점 계산
    double majorGPA = totalScore / totalCredits;

    cout << fixed;
    cout.precision(6);
    cout << majorGPA << endl;

    return 0;
}
