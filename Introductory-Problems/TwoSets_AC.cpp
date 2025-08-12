#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long total = n * (n + 1) / 2;
    if (total % 2) {
        cout << "NO\n";
        return 0;
    }

    long long target = total / 2;
    vector<long long> a, b;
    long long sumA = 0;

    for (long long i = n; i >= 1; --i) {
        if (sumA + i <= target) {
            a.push_back(i);
            sumA += i;
        } else {
            b.push_back(i);
        }
    }

    cout << "YES\n";
    cout << a.size() << "\n";
    for (auto x : a) cout << x << " ";
    cout << "\n" << b.size() << "\n";
    for (auto x : b) cout << x << " ";
    cout << "\n";
}
