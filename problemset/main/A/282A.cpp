#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x=0;
    if(cin >> n){
        for(ll i=0;i<n;i++){
            string a;
            cin >> a;
            if(a=="++X" || a=="X++") x++;
            else if(a=="--X" || a=="X--") x--;
        }
    }
    cout << x << "\n";
}