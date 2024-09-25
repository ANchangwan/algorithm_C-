#include <bits/stdc++.h>
using namespace std;

string s;
char it = '.';

bool check(string s){
    stack<char>stk;
    for(auto it : s){
        if(it == '.') break;
        if(stk.size() && ((stk.top() == '(' && it == ')') || (stk.top() == '[' && it == ']'))) stk.pop();
        else if(((it == '(' || it == ')') || (it == '[' || it == ']'))) stk.push(it);
    }
 
    if(stk.empty())return true;
    else return false;
    
   return true;
}

int main(){
   while(true){
        getline(cin, s);
        if(s.size() == 1 && s[0] == '.') break;
        if(check(s)) cout << "yes" << "\n";
        else cout << "no" << "\n";
   }

    return 0;
}

