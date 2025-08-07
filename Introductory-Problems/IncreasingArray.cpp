#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long prev;
    long long moves = 0;
    cin >> n >> prev;

    for(int i = 1; i<n; ++i){
        long long curr;
        cin >> curr;
        if(curr < prev){
            moves += prev - curr;
        }else{
            prev = curr;
        }
    }
    cout << moves << '\n';
    return  0;
}