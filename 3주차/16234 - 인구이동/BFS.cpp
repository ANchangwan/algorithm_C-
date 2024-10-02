#include <bits/stdc++.h>
using namespace std;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int n,l,m,a[54][54],visited[54][54],sum,cnt;


void bfs(int y, int x, vector<pair<int, int>> &v) {
    queue<pair<int, int>> q;
    q.push({y, x});
    visited[y][x] = 1;  // 방문 표시
    sum = a[y][x];  // 초기 값 더하기
    v.push_back({y, x});  // 초기 위치 추가
    
    while (!q.empty()) {
        tie(y,x) = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n || visited[ny][nx]) continue;

            // 인구 차이가 조건에 맞는지 확인
            if (abs(a[ny][nx] - a[y][x]) >= l && m >= abs(a[ny][nx] - a[y][x])) {
                visited[ny][nx] = 1;
                q.push({ny, nx});
                v.push_back({ny, nx});
                sum += a[ny][nx];  // 인구 합계에 추가
            }
        }
    }
}

int main(){
    cin >> n >> l >> m;
    for(int i=0;i<n; i++){
        for(int j=0; j<n;j++){
            cin >> a[i][j];
        }
    }
 
    while(true){
            bool flag = 0;
            memset(visited, 0, sizeof(visited));
            for(int i=0;i<n; i++){
                for(int j=0; j<n;j++){
                    if(visited[i][j] == 0){
                        vector<pair<int, int>>v;
                        bfs(i,j,v);
                        if(v.size() == 1) continue;

                        for (pair<int, int> b : v) {
                            a[b.first][b.second] = sum / v.size();
                            flag = 1;
                        }
                    }   
            }
                
        }
        if (!flag) break; 
        cnt++; 
    }
    cout << cnt << "\n";
    
    return 0;
}