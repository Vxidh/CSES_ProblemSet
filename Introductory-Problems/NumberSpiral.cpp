#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long row, col;
        cin >> row >> col;

        long long n = max(row, col);
        long long ans;

        if (n % 2 == 0) {
            if (row == n) {
                ans = n * n - col + 1;
            } else {
                ans = (n - 1) * (n - 1) + row;
            }
        } else {
            if (col == n) {
                ans = n * n - row + 1;
            } else {
                ans = (n - 1) * (n - 1) + col;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
