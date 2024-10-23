#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int r,c,k,cnt,visited[10][10];
char a[10][10];

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

int dfs(int y, int x){
    if(y == 0 && x == c-1){
        if(k == visited[y][x]) return 1;
        return 0; 
    }
    int ret = 0;
    for(int i =0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx]) continue;
        if(a[ny][nx] == 'T') continue;
        visited[ny][nx] = visited[y][x] + 1;
        ret += dfs(ny,nx);
        visited[ny][nx] = 0;
    }
    return ret;
}

  
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> r >> c >> k;
    for(int i = 0; i < r; i++){
        for(int j =0; j < c; j++){
            cin >> a[i][j];
        }
    }
    
    visited[r-1][0] = 1;
    cout <<  dfs(r-1,0) << "\n";

    return 0;

}