#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<string> a(n);
    for(string &s:a) cin>>s;
    sort(a.begin(),a.end(),[](const string &a,const string &b){
        return a+b>b+a;
    });
    if(a[0]=="0") cout<<0;
    else{
        for(const string &s:a) cout<<s;
    }
}