#include <bits/stdc++.h>
using namespace std;

int n;
bool check;
string s,ret;
map<char,int> mp;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> s;
        mp[s[0]]++;
    }
    for(auto it : mp){
        if(it.second >= 5){
            ret += it.first;
        }
    }
    if(ret.size()) cout << ret << "\n";
    else cout << "PREDAJA" << "\n";
    
 
    return 0;

}