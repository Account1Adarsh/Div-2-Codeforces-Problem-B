//https://codeforces.com/contest/1976/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<=n;i++){
            cin>>brr[i];
        }
        int k=brr[n];
        ll res=0;
        int temp=INT_MAX;
        for(int i=0;i<n;i++){
            if(k<=max(arr[i],brr[i]) and k>=min(arr[i],brr[i])) {
                temp=0;
            }
            res+=abs(arr[i]-brr[i]);
            temp=min(abs(k-arr[i]),temp);
            temp=min(abs(k-brr[i]),temp);
        }
        res+=temp;
        
        cout<<res+1<<endl;
    }
    return 0;
}
