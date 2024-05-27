//https://codeforces.com/contest/1942/problem/B

/************WATCHED VIDEO SOLUTION FOR IT**** https://www.youtube.com/watch?v=xMhOiRVIX3U*************/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


bool check(int arr[],int k,int n){
    vector<ll> v(22,0);
    for(int i=0;i<k;i++){
        int a=arr[i];
        for(int j=0;a>0;j++){
            if(a%2) v[j]++;
            a/=2;
        }
    }
    vector<ll> freq=v;
    for(int i=k;i<n;i++){
        int x=arr[i];
        int y=arr[i-k];
        
        for(int j=0;x>0;j++){
            if(x%2) freq[j]++;
            x/=2;
        }
        for(int j=0;y>0;j++){
            if(y%2) freq[j]--;
            y/=2;
        }
        for(int i=0;i<22;i++){
            if(v[i]==0 and freq[i]>0) return false;
            if(v[i]>0 and freq[i]==0) return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //binary search
        int lo=1,hi=n;
        ll ans=n;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            if(check(arr,mid,n)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
