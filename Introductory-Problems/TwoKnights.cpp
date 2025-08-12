#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (long long k = 1; k <= n; ++k) {
        long long total = k * k;
        long long total_pairs = total * (total - 1) / 2;
        long long attacking_pairs = 4 * (k - 1) * (k - 2);
        cout << total_pairs - attacking_pairs << '\n';
    }

    return 0;
}
