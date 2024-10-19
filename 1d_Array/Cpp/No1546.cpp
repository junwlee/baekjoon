#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    auto maxVal = *max_element(scores.begin(), scores.end());

    double sum = 0.0;
    for (int j = 0; j < scores.size(); ++j) {
        sum += (static_cast<double>(scores[j]) / maxVal) * 100;
    }

    cout << sum / n << "\n";
    
    return 0;
}