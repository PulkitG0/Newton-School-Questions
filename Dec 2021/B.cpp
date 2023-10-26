#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mx=0;
    vector<int>count(26,0);
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>mx) mx=count[i];
    }
    int ans=n-mx;
    cout<<ans;
	return 0;
}
