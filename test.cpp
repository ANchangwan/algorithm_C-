#include <stack>
#include <string>
#include<iostream>
using namespace std;

string s;
int t;
stack<int>stk;

bool check(string s){
    stack<char> stk;
    for(char c : s){
        if(c =='(') stk.push(c);
        else{
            if(!stk.empty()) stk.pop();
            else return false;
        }
    }
    return stk.empty();
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while(t--){
        cin >> s;
        if(check(s)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}