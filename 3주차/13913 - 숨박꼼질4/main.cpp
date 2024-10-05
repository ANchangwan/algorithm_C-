#include <bits/stdc++.h>
using namespace std;

const int MAX = 200004;

int n,m,a[200004],visited[200004],prev_t[200004],idx;
vector<int>v;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    queue<int> q;
    q.push(n);
    visited[n] = 1;
    while(q.size()){
        int now = q.front();q.pop();
        if(visited[m]) break;
        for(int next : {now - 1,now + 1, now * 2}) {
                if(0 <= next && next <= MAX){
                    if(!visited[next]) {
                    visited[next] = visited[now] + 1;
                    prev_t[next] = now;//추적 방법
                    q.push(next);    
                }
            }
        }
    }
    cout << visited[m] - 1 << "\n";
    for(int i=m; i !=n; i = prev_t[i]){
        v.push_back(i);
    }
    v.push_back(n);
    reverse(v.begin(), v.end());
    for(int i : v)cout << i << " ";
    
    return 0;
}