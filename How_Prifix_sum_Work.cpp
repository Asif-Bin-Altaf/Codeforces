#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    vector<int> prifix_sum(n+1,0);
    for (int i = 0; i < n; i++) {
        prifix_sum[i+1]=prifix_sum[i]+arr[i];
    }
    cout<<prifix_sum[n-2]<<endl;
}