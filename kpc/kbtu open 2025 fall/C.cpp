#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll s;
    ll a=0,b=0,ans=0;
    cin >> s;
    string ss=to_string(s);
    vector<ll> d;
    for(char c : ss) d.push_back(c-'0');
    while(true){
        for(size_t i=0;i<ss.size();i++){
            if(d[i]%2!=0) a++;
            else b++;
        }
        if(a>b) break;
        else{
            a=0;b=0;s++;ans++;
            ss=to_string(s);
            d={};
            for(char c : ss) d.push_back(c-'0');
        }
    }
    cout << ans << "\n";
}