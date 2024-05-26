//https://codeforces.com/contest/1954/problem/B
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
        for(int i=0;i<n;i++) cin>>arr[i];

        int res=n;
        int a=arr[0];
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==a) count++;
            else{
                res=min(res,count);
                count=0;
            }
        }
        res=min(res,count);
        if(res==n) res=-1;
        cout<<res<<endl;
    }
    return 0;
}
