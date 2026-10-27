#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    ll cl=0,cu=0;
    cin >> s;
    for(char &tmp : s){
        if(tmp<97) cl++;
        else cu++;
    }
    if(cl>cu) transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return toupper(c);});
    else transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return tolower(c);});
    cout << s << "\n";
}