#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        long long x;
        cin >> x;
        sum += x;
    }

    long long expected = n * (n + 1) / 2;
    cout << expected - sum << '\n';

    return 0;
}
