#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int T;
    cin >> T;
    while(T--) {
        int n;  cin >> n;
        string s;  cin >> s;
        int cnt = 0;

        for(char c: s) {
            if(c == '1')  cnt++;
        }

        if(cnt % 4)  cout << '0';
        else   cout << '1';
        cout << endl;
    }

    return 0;
}
