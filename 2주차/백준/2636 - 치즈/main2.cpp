#include <bits/stdc++.h>
using namespace std;

int n, m, a[104][104],cnt=1,ret,visited[104][104];
vector<pair<int,int>>v;
const int dy[] ={-1,0,1,0};
const int dx[] = {0,1,0,-1};

bool check(){
    bool flag = 0;
    for(int i =0; i < n; i++){
        for(int j =0; j < m;j++){
            if(a[i][j] == 1) flag = true;
        }
    }
    if(flag) return 0;
    else return 1;
}

void dfs(int y, int x){
    visited[y][x] = 1;
    if(a[y][x] == 1){
        ret += a[y][x];
        a[y][x] = 0; 
        return;
    }
    for(int i = 0; i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(visited[ny][nx]) continue;
        dfs(ny,nx);
    }
    return;

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j =0; j < m;j++){
            cin >> a[i][j];
        }
    }
    while(true){
        memset(visited,0, sizeof(visited));
        ret = 0;
        dfs(0,0);       
        cnt++;
        if(check()) break;
    }

    cout << cnt - 1 << "\n" << ret << "\n";
   
    return 0;
}