#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(a<=b)
            cout << "-1\n";
        else
            cout << min(b,a-b) << "\n";
    }
}