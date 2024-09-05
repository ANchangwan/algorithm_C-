#include <bits/stdc++.h>
using namespace std;

int cnt, n;
string str;
vector<char> stk;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        stk.clear();
        
        for(char a : str){
            if(!stk.empty() && stk.back() == a) {
                stk.pop_back();
            } else {
                stk.push_back(a);
            }
        }
        if(stk.empty()) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}


   
