#include <bits/stdc++.h>
using namespace std;

int n;
string s,ret;
int a[104];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i =0; i < n;i++){
        cin >> s;
        a[s[0] - 'a']++;
    }

    for(int i = 0; i <26; i++){
        if(a[i] >= 5) ret += i + 'a';
    }
    if(ret.size()) cout << ret << "\n";
    else cout << "PREDAJA" << "\n";
    
 
    return 0;

}