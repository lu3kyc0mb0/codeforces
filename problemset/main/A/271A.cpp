#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool unique(ll n){
    string s=to_string(n);
    set<char> d(s.begin(),s.end());
    return d.size()==s.size();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll y;
    cin >> y;
    while(true){
        y++;
        if(unique(y)) 
            break;
    }
    cout << y << "\n";
}