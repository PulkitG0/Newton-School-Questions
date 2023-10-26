#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
int main() {
	ll n, a=-1, b=-1, c=1000001, d=1000001;
    cin>>n;
    vector<ll>x1(n), x2(n), y1(n), y2(n);
    for(ll i=0;i<n;i++){
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        if(x1[i]>a) a=x1[i];
        if(y1[i]>b) b=y1[i];
        if(x2[i]<c) c=x2[i];
        if(y2[i]<d) d=y2[i];
    }
    ll ans=0;
    if((c-a)>0 && (d-b)>0) ans=(c-a) * (d-b);
    cout<<ans;
    return 0;
}
