#include <bits/stdc++.h>
using namespace std;

int n, m,a,b,idx,ret, visited[10004],dp[10004],mx;
vector<int>adj[10004];

int dfs(int here){
    visited[here] = 1;
    int ret = 1;
    for(int there:adj[here]){
        if(visited[there]) continue;
        ret+= dfs(there);
    }
    return ret;
}


int main(){
    cin >> n >> m;
    for(int i=0; i <m;i++){
        cin >> a >> b;
        adj[b].push_back(a);
    }
    for(int i =1; i<=n; i++){
        memset(visited, 0, sizeof(visited));
        dp[i] = dfs(i);
        mx = max(dp[i], mx);
    }

    
    for (int i = 1; i <= n; i++) if(mx == dp[i]) cout << i << " "; 
    
    
    return 0;
}