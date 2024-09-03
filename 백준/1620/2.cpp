#include <bits/stdc++.h>
using namespace std;

int n,k;
string str;
string res;

map<string,int> mp;
map<int, string> mp2;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i =0; i<n; i++){
        cin >> str;
        mp.insert({str,i+1});
        mp2.insert({i+1,str});
    }
    for(int i = 0; i <k; i++){
        cin >> res;
        if(!atoi(res.c_str())){
            cout << mp[res] << "\n"; 
        }else{
            cout << mp2[atoi(res.c_str())] << "\n";
        }
    }
    
    return 0;
} 