# include<iostream>

long long find_min_steps(int N) {
    if (N == 1) {
        return 1;
    }

    int low = 1;
    int high = 1000000;
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        long long last_room_of_mid = 3LL * mid * mid - 3LL * mid + 1;

        if (last_room_of_mid >= N) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}


using namespace std;

int main() {
    int N;
    cin >> N;

    cout << find_min_steps(N) << endl;
    return 0;
}