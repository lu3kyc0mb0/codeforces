#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,a=0;
    cin>>n;
    string s,p;
    for(ll i=0;i<n;i++){
        cin>>s;
        if(s!=p) a++;
        p=s;
    }
    cout<<a;
}