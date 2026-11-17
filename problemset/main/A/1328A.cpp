#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<(b-a%b)%b<<'\n';
    }
}