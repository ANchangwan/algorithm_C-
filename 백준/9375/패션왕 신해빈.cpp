#include<bits/stdc++.h> 
using namespace std;  

int n, k;
string s,a ,b;


int main() {
    cin >> n;
    while(n--){
        map<string, int> mp;
        cin >> k;
        for(int i=0; i<k; i++){
            cin >> a >> b;
            mp[b]++;
        }
        long long rat = 1;
        for(auto pair : mp) {
            rat *= ((long long)pair.second + 1);
        }
        rat--;
        cout << rat << "\n";
    } 
    return 0;
} 