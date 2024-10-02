#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000; 
int n,m ,a[MAX + 4],visited[MAX + 4];
long long cnt[MAX+4];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    queue<int>q; 
    visited[n] = 1;
    cnt[n] = 1;
    q.push(n);
    while(q.size()){
        int now = q.front();q.pop();
        for(int here : {now+1,now-1,2*now}){{
            if(0 <= here && here <= MAX){
                if(!visited[here]){
                    visited[here] = visited[now]+1;
                    q.push(here);
                    cnt[here] += cnt[now];
                }else if(visited[here] == visited[now] + 1){
                    cnt[here] += cnt[now];
                }
            }
           
        }

        }
    }
    cout << visited[m] - 1 << "\n";
    cout << cnt[m] << "\n";
    
    return 0;
}