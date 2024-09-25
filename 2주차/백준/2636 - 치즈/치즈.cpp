#include <bits/stdc++.h>
using namespace std;
int n,m, a[104][104],visited[104][104],cnt,ret;
vector<pair<int,int>> v;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1}; 

void go(int y,int x){
    visited[y][x] = 1;
    // cout << y << " : " << x << "\n";
    if(a[y][x] == 1){
        v.push_back({y,x});
        return;
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(nx < 0 || ny < 0 || ny >= n || nx >= m || visited[ny][nx]) continue;
        go(ny,nx);
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    while(true){
        fill(&visited[0][0], &visited[0][0] + 104*104, 0);
        v.clear();
        go(0,0);
        ret = v.size();
        for(pair<int, int> c : v){
            a[c.first][c.second] = 0;
        }
        bool flag = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j <m; j++){
                if(a[i][j] != 0) flag = 1;
            }
        }
        cnt++;
        if(!flag) break;
    }
    cout << cnt << "\n";
    cout << ret << "\n";
    return 0;

}