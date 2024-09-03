#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,cnt=0;char c;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int max=v[n-1];
    while(m--){
        int l,r;cin>>c>>l>>r;
        if(c=='+'){
            if(max>=l && max<=r)
            max++;
        }
        else{
            if(max>=l && max<=r)
            max--;
        }
        cout<<max<<" ";
    }
    cout<<endl;    
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