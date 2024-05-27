//https://codeforces.com/contest/1946/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        ll M=1000000007;
        cin>>n>>k;
        ll arr[n];
        ll csum=0;
        ll msum=0;
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            csum+=arr[i];
            if(csum<0){
                csum=0;
            }
            msum=max(msum,csum);
        }
        ll mul=1;
        for(int i=1;i<=k;i++){
                mul=2*mul%M;
        }
        k=mul-1;
        
        ll res=(sum%M+((msum%M)*(k%M))%M);
        if(res<0) res+=M;
        res%=M;
        cout<<res<<endl;


        
    }
    return 0;
}
