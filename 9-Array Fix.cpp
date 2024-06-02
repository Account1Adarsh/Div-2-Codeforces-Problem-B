//got help from video -hint
//https://codeforces.com/contest/1948/problem/B

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

        int pre=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(arr[i]>pre){
                int a=arr[i]%10;
                int b=arr[i]/10;
                if(b<=a){
                        if(b>0){
                            if(b>=pre){
                                pre=a;
                            }
                            else{
                                pre=arr[i];
                            }
                        }
                        else{
                            if(a>=pre) pre=a;
                        }
                }
                else{
                    pre=arr[i];
                }  
            }
            else if(pre==arr[i]) continue;
            else{
                flag=false;
                break;
            }
            //cout<<pre<<" ";
        }
        flag?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}
