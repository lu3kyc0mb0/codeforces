#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
vector<pair<char,ll>> pp;
vector<array<bool,5>> pC;
vector<array<bool,5>> pV;
void solve(){
    ll x;
    cin >> x;
    if(x==1){
        string a;
        cin >> a;
        char c=a[0];
        ll v=a[1]-'0';
        pp.push_back({c,v});
        pC.push_back({true,true,true,true,true});
        pV.push_back({true,true,true,true,true});
    }
    else if (x==2){
        ll v;
        cin >> v;
        for(ll i=0;i<(ll)pp.size();i++){
            if(pp[i].second!=v)
                pV[i][v-1]=false;
            else
                for(ll j=0;j<5;j++)
                    if(j!=v-1)
                        pV[i][j]=false;
        }
    }
    else if(x==3){
        char c;
        cin >> c;
        ll col=c-'A';
        for(ll i=0;i<(ll)pp.size();i++){
            if(pp[i].first!=c)
                pC[i][col]=false;
            else
                for(ll j=0;j<5;j++)
                    if(j!=col)
                        pC[i][j]=false;
        }
    }
    else{
        ll k;
        cin >> k;
        if(pC.empty() && pV.empty()) cout << "NO\n";
        ll idx=(ll)pp.size()-k;
        if()
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin >> q;
    while(q--){
        solve();
    }
}
