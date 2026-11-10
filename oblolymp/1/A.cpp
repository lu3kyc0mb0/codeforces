#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
ll t=0;
array<ll,5> lV{};
array<ll,5> lC{};
vector<ll> bo;
vector<pair<char,ll>> pp;
void solve(){
    t++;
    ll x;
    cin >> x;
    if(x==1){
        string a;
        cin >> a;
        char c=a[0];
        ll v=a[1]-'0';
        pp.push_back({c,v});
        bo.push_back(t);
    }
    else if (x==2){
        ll v;
        cin >> v;
        lV[v-1]=t;
    }
    else if(x==3){
        char c;
        cin >> c;
        ll col=c-'A';
        lC[col]=t;
    }
    else{
        ll k;
        cin >> k;
        ll idx=(ll)pp.size()-k;

        ll act=pp[idx].second-1;
        bool vK=(lV[act]>bo[idx]);
        ll exc=0;
        for(ll j=0;j<5;j++)
            if(j!=act && lV[j]>bo[idx]) exc++;
        if(exc==4) vK=true;

        ll actc=pp[idx].first-'A';
        bool cK=(lC[actc]>bo[idx]);
        ll exc1=0;
        for(ll i=0;i<5;i++)
            if(i!=actc && lC[i]>bo[idx]) exc1++;
        if(exc1==4) cK=true;
        if(cK && vK) cout << "YES\n";
        else cout << "NO\n";
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