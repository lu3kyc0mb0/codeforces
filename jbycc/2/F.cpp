#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    vector<ll> c;
    cin >> n >> m;
    struct Event{
        ll start,end,id;
    };
    vector<Event> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i].start >> a[i].end;
        a[i].id=i+1;
    }
    sort(a.begin(),a.end(),[](const auto& x,const auto& y){return x.end<y.end;});
    ll lF=a[0].end;
    c.push_back(a[0].id);
    for(ll i=1;i<n;i++){
        if(a[i].start>=lF){
            lF=a[i].end;
            c.push_back(a[i].id);
        }
    }
    cout << c.size() << "\n";
}