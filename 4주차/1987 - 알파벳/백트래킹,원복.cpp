#include <bits/stdc++.h>
using namespace std;

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

const int INF = -987654321;
int r,c,visited,ret=INF;
char a[24][24];

void go(int y, int x, int cnt){
    ret = max(ret, cnt);
    for(int i =0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= r || nx >= c) continue;
        int _next = (int)(a[ny][nx] - 'a');
        if(visited & (1 << _next))continue;
        visited |= (1<<_next);
        go(ny,nx,cnt+1);
        visited &= ~(1 << _next);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> r >> c;
    for(int y=0; y < r; y++){
        for(int x=0; x < c; x++){
            cin >> a[y][x];
        }
    }

    visited = (1 << (int)(a[0][0] - 'a'));
    go(0,0,1);
    cout << ret << "\n";
    return 0;
}