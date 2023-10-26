#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<int>v(3);
        for(int i=0;i<3;i++) cin>>v[i];
        bool ans=0;
        while(1>0){
            sort(v.begin(), v.end());
            v[1]--;
            v[2]--;
            sort(v.begin(), v.end());
            if(v[0]==v[1] && v[1]==v[2] && v[0]==0){
                ans=1;
                break;
            }
            if(v[0]<0) break;
        }
        if(ans) cout<<"Yes \n";
        else cout<<"No \n";
        
    }
    return 0;
}
