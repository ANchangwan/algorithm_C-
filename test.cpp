#include <bits/stdc++.h>
using namespace std;

int cnt,n;
string str;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> str;
        stack<char>stk;
        for(char a : str){
            if(stk.size() && stk.top() == a) stk.pop();
            else stk.push(a);
        }
        if(!stk.size()) cnt++;
    }
    cout << cnt << "\n";
    return 0;
} 


   
