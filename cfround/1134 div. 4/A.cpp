#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cout<<((a+1==b&&b+1==c)?"YES\n":"NO\n");
    }
}