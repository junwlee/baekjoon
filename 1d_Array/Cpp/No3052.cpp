#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> remainders;
    int num;
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        remainders.insert(num % 42);
    }
    cout << remainders.size() << "\n";

    return 0;
}