#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,s=0;
    cin >> n;
    bool a=false,b=false;
    for(ll i=0;i<n;i++){
        ll tmp;
        cin >> tmp;
        s+=tmp;
        if(tmp>=2){
            a=true;
            if(i>0 && i<n-1)
                b=true;
        }
    }
    if(n==1)
        cout << s << "\n";
    else if(!a)
        cout << -1 << "\n";
    else if(b)
        cout << s-1 << "\n";
    else
        cout << s-(n-1) << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    if(cin >> t)
        while(t--)
            solve();
}