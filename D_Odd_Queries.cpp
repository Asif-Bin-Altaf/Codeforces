#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<long long> prefix_sum(n + 1, 0);
    
    // Calculate the prefix sum array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }
    
    long long total_sum = prefix_sum[n];
    
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        
        long long range_sum = prefix_sum[r] - prefix_sum[l - 1];
        long long new_sum = total_sum - range_sum + (r - l + 1) * 1LL * k;
        
        if (new_sum % 2 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
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