#include <bits\stdc++.h>
using namespace std;
int main(){
    unordered_set<char> a;
    string b;
    cin >> b;
    for(int i=0;i<b.size();i++){
        a.insert(b[i]);
    }
    if(a.size()%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}