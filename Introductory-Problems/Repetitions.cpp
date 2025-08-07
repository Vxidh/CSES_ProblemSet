#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int max_count = 1, count = 1;
    for(int i = 1; i<s.length(); ++i){
        if(s[i] == s[i-1]) count++;
        else count = 1;
        max_count = max(max_count, count);
    }
    cout << max_count << '\n';
    return 0;
}