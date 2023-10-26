#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int q,res=0;
    long long n,a;
    string s;
    cin>>q;
    while(q--){
    res=0;
    cin>>n;
    for(int i=1;i<200;i++){
        if(i>n)break;
        if(n%i==0){
            a=n/i;
            s=to_string(a);
            int sum=0;
            for(auto i:s)sum+=(i-'0');
            if(sum==i)res++;
        }
    }
    cout<<res<<"\n";
    }
    return 0;
}
