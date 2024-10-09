#include <bits/stdc++.h>
using namespace std;

int t,y,x,m,n,t_x,t_y,k,a[54][54];
bool visited[54][54];
const int dy[] = {-1,0,1,0};
const int dx[] = {0, 1, 0, -1};
int bfs(int y, int x){
    queue<pair<int, int>> q;
    visited[y][x] = 1;
    q.push({y,x});
    while(q.size()){
        tie(y,x) = q.front();q.pop();
        for(int i=0; i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = 1;
            q.push({ny,nx});
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while(t--){
        memset(a, 0,sizeof(a));
        memset(visited, 0, sizeof(visited));
        int ret = 0;
        cin >> m >> n >> k; // 가로 m = x, 세로 n = y
        for(int i =0; i <k; i++){
            cin >> t_x >> t_y;
            a[t_y][t_x] = 1;
        }
        for(int i =0; i< n; i++){
            for(int j =0; j < m; j++){
                if(a[i][j] == 1 && visited[i][j] == 0) ret += bfs(i, j);
            }
        }
        cout << ret << "\n";
    }
}