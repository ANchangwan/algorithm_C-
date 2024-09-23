#include<bits/stdc++.h>

using namespace std;

stack<int> st;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(int i : arr){
        if(st.size() && st.top() == i) continue;
        else st.push(i);
    }
    while(!st.empty()){
        answer.push_back(st.top());
        st.pop();
    }
    reverse(answer.begin(),  answer.end());
    return answer;
}