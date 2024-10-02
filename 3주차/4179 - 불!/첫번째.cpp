#include <bits/stdc++.h>
using namespace std;

int r, c;
char a[1004][1004];
int visited[1004][1004];
queue<pair<int,int>> jq, fq;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

int bfs(){
    while(!jq.empty()){
        // 불 확산
        int fsize = fq.size();
        while(fsize--){
            int y = fq.front().first, x = fq.front().second;
            fq.pop();
            for(int i = 0; i < 4; i++){
                int ny = y + dy[i], nx = x + dx[i];
                if(ny < 0 || nx < 0 || ny >= r || nx >= c || a[ny][nx] == '#' || a[ny][nx] == 'F') continue;
                a[ny][nx] = 'F';
                fq.push({ny, nx});
            }
        }
        
        // 지훈이 이동
        int jsize = jq.size();
        while(jsize--){
            int y = jq.front().first, x = jq.front().second;
            jq.pop();
            if(y == 0 || x == 0 || y == r-1 || x == c-1) return visited[y][x];
            for(int i = 0; i < 4; i++){
                int ny = y + dy[i], nx = x + dx[i];
                if(ny < 0 || nx < 0 || ny >= r || nx >= c || a[ny][nx] != '.' || visited[ny][nx]) continue;
                visited[ny][nx] = visited[y][x] + 1;
                jq.push({ny, nx});
            }
        }
    }
    return -1;
}

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
            if(a[i][j] == 'J'){
                jq.push({i, j});
                visited[i][j] = 1;
            }
            if(a[i][j] == 'F') fq.push({i, j});
        }
    }
    
    int ret = bfs();
    if(ret == -1) cout << "IMPOSSIBLE\n";
    else cout << ret << "\n";

    return 0;
}