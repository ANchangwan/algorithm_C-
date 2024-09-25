#include <bits/stdc++.h>

using namespace std;
queue<int> q;
vector<int> ret;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    for(int i = 0; i < priorities.size(); i++){
        q.push(i);
    }
    while(q.size()){
        int idx = q.front();
        q.pop();
        if(priorities[idx] != *max_element(priorities.begin(), priorities.end())){
            q.push(idx);
        }else{
            ret.push_back(idx);
            priorities[idx] = 0;
        }
    }
    
    for(int i = 0; i < ret.size(); i++){
        if(ret[i] == location) return i+1;
    }
    
    
    return answer;
}