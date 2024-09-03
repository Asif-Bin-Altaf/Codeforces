#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r;cin>>l>>r;
    int odd_cnt=0;
    for(int i=l;i<=r;i++){
        if(i%2!=0)
        odd_cnt++;
    }
    cout<<odd_cnt/2<<endl;
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