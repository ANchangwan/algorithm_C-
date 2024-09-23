#include<bits/stdc++.h>
using namespace std;

stack<char> st;

bool solution(string s)
{
    bool answer = true;
    for(auto i : s){
        if(st.size() && (st.top() == '(' && i == ')')) st.pop();
        else st.push(i);
    }
    if(!st.empty()) answer = false;
    return answer;
}