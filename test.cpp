#include<bits/stdc++.h>
using namespace std;

string s;
int n,cnt,ret =-987654321,start;
stack<char>st;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> s;
    for(char c : s){
        if(st.size() && st.top() == '(' && c == ')'){
            cnt += 2;
            st.pop();
        }else if(st.size() && st.top() == ')' && c == '('){
            while (!st.empty()) st.pop();
            st.push(c);
            cnt = 0;
        }else{
            st.push(c);
        }
        ret = max(ret, cnt);
    }
    cout << cnt << "\n";
    return 0;
}