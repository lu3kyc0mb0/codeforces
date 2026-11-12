#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        ll a=(s[0]=='B');
        for(ll i=1;i<n;i++){
            if(s[i]==s[i-1]) a++;
        }
        cout<<a<<'\n';
    }
}