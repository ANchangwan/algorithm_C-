#include<bits/stdc++.h> 
using namespace std;   
int n; 
string s, ori_s, pre, suf; 
int main(){
    cin >> n;
    cin >> s;
    int find = s.find("*");
    pre = s.substr(0, find);
    suf = s.substr(find+1);
    for(int i = 0; i < n; i++){
        cin >> ori_s;
        if(pre.size() + suf.size() > ori_s.size()){
            cout << "NE\n";
        }else{
            if(ori_s.substr(0, pre.size()) == pre && ori_s.substr(ori_s.size() - suf.size()) == suf) cout << "DA\n";
            else cout << "NE\n";
        }
    }
    return 0;
} 