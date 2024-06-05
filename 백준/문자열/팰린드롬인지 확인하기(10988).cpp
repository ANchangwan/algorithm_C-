#include <bits/stdc++.h>
using namespace std;

int cnt[26];
string str;
string rts;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> str;
    rts = str;
    reverse(str.begin(), str.end());
    if(str == rts) cout << 1;
    else cout << 0;

    return 0;

}