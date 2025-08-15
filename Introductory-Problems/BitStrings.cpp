#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    const long long mod = 1000000007;
    long long res = 1;
    long long base = 2;
    while(n>0){
        if(n & 1){
            res = (res * base) % mod;
        }
        base = (base*base) % mod;
        n = n >> 1;
    }
    cout << res << '\n';
    return 0;
}