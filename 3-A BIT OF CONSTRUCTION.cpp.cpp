https://codeforces.com/contest/1957/problem/B

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
        int res[n];
        int temp=log2(k);
        temp=pow(2,temp)-1;
        int a=__builtin_popcount(k);
        int b=__builtin_popcount(temp);
        if(a>=b||n==1){
            res[0]=k;
            for(int i=1;i<n;i++) res[i]=0;
        }
        else{
            res[0]=temp;
            res[1]=k-temp;
            for(int i=2;i<n;i++) res[i]=0;
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;

        
    }
    return 0;
}
