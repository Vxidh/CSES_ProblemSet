#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long totalsum = n*(n+1)/2;
    if(totalsum %2 != 0){
        cout << "NO" << '\n';
        return 0;
    }else{
        long long target = totalsum/2;
        vector<int> set1;
        vector<int> set2;
        int sum = 0;
        for(int i = n; i>0; --i){
            if(sum + i <= target){
                set1.push_back(i);
                sum += i;
            }else{
                set2.push_back(i);
            }
        }
        cout << "YES" << '\n';
        cout << set1.size() << '\n';
        for(auto x: set1){
            cout << x << ' ';
        }
        cout << '\n';
        cout << set2.size() << '\n';
        for(auto y : set2){
            cout << y << ' ';
        }
    }
    return 0;

    
}