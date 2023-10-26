#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n) {
            cout<<-1<<"\n";
            continue;
        }
        if(k==1 && n!=1) {
            cout<<-1<<"\n";
            continue;
        }
        int a[k];
        for(int i=0;i<k;i++){
            a[i]=i;
        }
        string ans="";
        string add="";
        for(int i=0;i<2;i++) add.push_back('a'+i);
        if(n%2==0){
            for(int i=0;i<n/2;i++) ans+=add;
        }
        else {
            for(int i=0;i<n/2;i++) ans+=add;
            ans+='a';
        }
        if(k>2){
            for(int i=n-1;i>=((n-k)+2);i--){
                ans[i]='a'+((i-n)+k);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
