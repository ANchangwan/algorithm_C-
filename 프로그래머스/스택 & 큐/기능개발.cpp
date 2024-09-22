#include<bits/stdc++.h>

using namespace std;
int cnt,rest,temp;
vector<int> a;
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    for(int i = 0; i < progresses.size(); i++){
        rest = 0;
        rest = (100-progresses[i]) / speeds[i];
        temp = (100-progresses[i]) % speeds[i];
        if(temp){
            rest+= 1;
          
        }
        a.push_back(rest);
    }
    int maxNum = a[0]; 
    for(int i=0; i < a.size(); i++){
        if(maxNum >= a[i]) cnt++;
        else {
            answer.push_back(cnt);
            maxNum = a[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}