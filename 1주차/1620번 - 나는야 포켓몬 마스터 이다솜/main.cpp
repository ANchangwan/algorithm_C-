#include <bits/stdc++.h>
using namespace std;

int n,m;
string s,s2;
map<string,int>mp;
map<int, string>mp2;
vector<string> ret;
int main(){
    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> s;
        mp[s] = i+1;
        mp2[i+1] = s;
    }
    
    for(int i=0; i<m; i++){
        cin >> s2;
        if(atoi(s2.c_str())){
            ret.push_back(mp2[atoi(s2.c_str())]);
        }else{
            ret.push_back(to_string(mp[s2]));
        }
    }
   
    for(string res : ret) cout << res << "\n";
    return 0;
}