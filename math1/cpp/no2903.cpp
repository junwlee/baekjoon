#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long resuit = static_cast<long long>(pow(2, N) + 1);
    cout << resuit * resuit << endl;
    return 0;
}