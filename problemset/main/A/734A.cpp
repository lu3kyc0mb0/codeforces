#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a; string n;
    cin >> a >> n;
    ll an=0,da=0;
    for(char &tmp : n){
        if(tmp=='A') an++;
        else da++;
    }
    if(an==da) cout << "Friendship\n";
    else if(an>da) cout << "Anton\n";
    else cout << "Danik\n";
}