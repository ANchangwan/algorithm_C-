#include<bits/stdc++.h>
using namespace std;

const int INF = -987654321;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

int n,m, a[54][54], cnt, cnt2, cnt3,ret = INF,ret2 = INF;
int visited[54][54];

int dfs(int y, int x){
    int cnt2 = 1;
    visited[y][x] = 1;
    for(int i=0; i<4; i++){
        int ny = y + dy[i], nx = x + dx[i];
        if(a[y][x] & (1 << i)) continue;
        if(ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] == 1) continue;
        cnt2 += dfs(ny,nx);
        ret = max(ret, cnt2);
    }
    return cnt2;
}
void dfs2(int y, int x, int cnt){
    ret2 = max(ret2, cnt);
    visited[y][x] = 1;
    for(int i =0; i<4; i++){
        int ny = y + dy[i], nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] == 1) continue;
        if(a[y][x] & (1 << i)) continue;
        dfs2(ny,nx, cnt+1);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=0; i < n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i <n; i++){
        for(int j=0; j<m;j++){
            if(visited[i][j] == 0){
                cnt++;
                dfs(i, j, cnt);
            }
        }
    }
    // memset(visited,0,sizeof(visited));
    // for(int i=0; i <n; i++){
    //     for(int j=0; j<m;j++){
    //         if(visited[i][j] == 0){
    //             for(int k =0; k < 4;k++){
    //                 a[i][j] &= ~(1 << k);
    //                 dfs2(i, j, 1);
    //                 a[i][j] &= ~(1 << k); 
    //             }
    //         }
    //     }
    // }
    cout << cnt << "\n" << ret << "\n";
}

/*
7 4
11 6 11 6 3 10 6
7 9 6 13 5 15 5
1 10 12 7 13 7 5
13 11 10 8 10 12 13
*/