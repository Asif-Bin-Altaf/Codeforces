#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;cin>>a>>b;
    if(a%2!=0){
        cout<<"NO\n";
    }
    else if(a==0 && b%2==0){
        cout<<"YES\n";
    }
    else if(a==0 && b%2!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0;
}