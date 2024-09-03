#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    vector<char> v;
    for(int i=1;i<=12;i++){
        if(i==a)
        v.push_back('A');
        if(i==b)
        v.push_back('A');
        if(i==c)
        v.push_back('B');
        if(i==d)
        v.push_back('B');
    }
    for(int i=0;i<3;i++){
        if((v[i]=='A' && v[i+1]=='A') || (v[i]=='B' && v[i+1]=='B')){
        cout<<"NO\n";
        return;
        }
    }
    cout<<"YES\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}