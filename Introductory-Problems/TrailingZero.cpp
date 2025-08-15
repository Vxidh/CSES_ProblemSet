#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;

    //Need to calculate trailing zeros in a factorial. 
    //Number of 2s in the factorial is much much more than numbers of 5s (2*5 = 10)
    long long count = 0;
    
    long long five_power = 5;

    while(floor(n/five_power) > 0){
        count += floor(n/five_power);
        five_power = five_power*5;
    }
    cout << count << '\n';
    return 0;
    
}