#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin >> n >> k;
    while(k--){
        if(n%10==0)
            n/=10;
        else 
            n--;
    }
    cout << n << "\n";
}