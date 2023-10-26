#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll sum=0,count=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%k!=0) cout<<"No";
    else {
        ll m=sum/k;
        ll tmp=0;
        bool chk=0;
        for(int i=0;i<n;i++){
            if((tmp+v[i])<m) tmp+=v[i];
            else if((tmp+v[i])==m) {
                count++;
                tmp=0;
            }
            else {
                chk=1;
                break;
            }
        }
        if(chk) cout<<"No";
        if(!chk && count==k) cout<<"Yes";
    }
    return 0;
}
