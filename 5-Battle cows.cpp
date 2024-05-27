//https://codeforces.com/contest/1951/problem/B
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a=-1,b=-1;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=0;i<n;i++){
            if(arr[i]>arr[k-1]){
                if(a==-1){
                    a=i;
                }
                else{
                    b=i;
                    break;
                }
            }
        }
        if(b==-1){
            b=n;
        }
        if(a==-1){
            cout<<n-1<<endl;
            continue;
        }
        k--;
        if(k<a){
            cout<<a-1<<endl;
        }
        else{
            int c=min(k,b);
            int p=0;
            if(a==0){
                p=c-a-1;
            }
            else{
                p=c-a;
            }
            int res=max(a-1,p);
            cout<<res<<endl;
        }
    }
    return 0;
}

