//https://codeforces.com/contest/1935/problem/B
//watched video but had same logic as mine i was having issue in implementing somewhere before

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
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        int mex=n;
        for(int i=0;i<n;i++){
            if(s.find(i)==s.end()){
                mex=i;
                break;
            }
        }

        vector<int> res;
        s.erase(s.begin(),s.end());
        res.push_back(1);
        for(int i=0;i<n;i++){
            if(arr[i]<mex) s.insert(arr[i]);

            if(s.size()==mex){
                res.push_back(i+1);
                break;
            }
        }
        bool flag=false;
        if(res[1]==n){
            flag=false;
        }
        else{
            s.erase(s.begin(),s.end());
            
            for(int i=res[1];i<n;i++){
                if(arr[i]<mex) s.insert(arr[i]);

                if(s.size()==mex){
                    flag=true;
                    break;
                }
            }
            if(flag){
                res.push_back(res[1]+1);
                res.push_back(n);
            }
            
        }

        if(flag){
            cout<<2<<endl;
            cout<<res[0]<<" "<<res[1]<<endl<<res[2]<<" "<<res[3]<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
