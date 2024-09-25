#include <bits/stdc++.h>
using namespace std;

//종말의 수 = 666 최소 3개
int n;
string s;
vector<string> ret;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    stack<char> st;
    while(n--){
        cin >> s;
        for(char i : s){
            if(st.size() && (st.top() == '(' && i == ')')) st.pop();
            else st.push(i);
        }
        if(st.size())ret.push_back("NO");
        else ret.push_back("YES");
        while(st.size()){
            st.pop();
        }
    }
    for(string i : ret){
        cout << i << "\n";
    }

    return 0;
}