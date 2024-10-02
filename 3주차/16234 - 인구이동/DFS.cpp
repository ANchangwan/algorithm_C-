#include <bits/stdc++.h>
using namespace std;


int n,l,m,a[54][54],sum,cnt; //n 맵크기, l 최소인구수, m 최대 인구수
bool visited[54][54];
vector<pair<int,int>> p; // 인구 이동 좌표

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

void dfs(int y, int x){
    for(int i=0; i<4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(nx < 0 || ny < 0 || nx >= n || ny >= n || visited[ny][nx]) continue;
        if(l <= abs(a[ny][nx] - a[y][x]) && m >= abs(a[ny][nx] - a[y][x])){
            sum += a[ny][nx];
            p.push_back({ny,nx});
            visited[ny][nx] = 1;
            dfs(ny,nx);
        }
    }
    return;
}

int main(){
    cin >> n >> l >> m;
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            cin >> a[i][j];
        }
    }
    while(true){
        memset(visited, 0, sizeof(visited));
        sum = 0;
        bool flag = 0;
        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                if(!visited[i][j]){
                    p.clear();
                     visited[i][j] = 1;
                     sum = a[i][j];
                     p.push_back({i,j});
                     dfs(i,j);

                     if(p.size() == 1) continue;
                     
                     for(pair<int,int> it : p){
                        a[it.first][it.second] = sum / p.size();
                        flag = 1;
                     }
                     
                }
            }
        }
        if(!flag) break;
        cnt++;
        
    }
    cout << cnt << "\n";
    return 0;
}