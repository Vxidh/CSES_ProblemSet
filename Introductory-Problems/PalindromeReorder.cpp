#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> freq (26,0);
    for(const auto &t : s) freq[t - 'A']++;

    int count = 0;
    for(int f : freq) if(f%2 != 0) count++;

    if(count > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string first;
    char middle = 0;

    for(int i = 0; i<26; ++i){
        if(freq[i] % 2 == 0){
            middle = 'A' + i;
            freq[i]--;
        }
        first.append(freq[i]/2, 'A'+i);
    }
    string second_half = first;
    reverse(second_half.begin(), second_half.end());

    if(middle) cout << first << middle << second_half;
    else cout << first << second_half;

}