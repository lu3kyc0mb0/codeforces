#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if(n%2==0) cout << n/2 << "\n";
    else cout << -(n+1)/2 << "\n";
}