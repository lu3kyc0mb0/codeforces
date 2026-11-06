#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,r;
    cin >> a;
    ll n=a.size();
    vector<int> s(n+1);
    for(ll i=n-1;i>=0;i--)
        s[i]=s[i+1]+(a[i]==')');
    ll g=0;
    for(ll i=0;i<n;i++){
        char c=a[i];
        if(c=='('){
            if(s[i]>=g+1){
                r+=c;
                g++;
            }
        }
        else{
            if(g>0){
                r+=c;
                g--;
            }
        }
    }
    cout << r.size() << "\n";
    cout << r << "\n";
}