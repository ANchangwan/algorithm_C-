#include<bits/stdc++.h>
using namespace std; 
#define V 104


int h,w,k,a[V][V],sx,sy,ex,ey,ret,cnt;
bool visited[V][V];
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
vector<int> stk; 

int DFS(int y, int x){
    int ret = 1;
    visited[y][x] = 1;
    for(int i=0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= w || ny >= h || a[ny][nx] == 0) continue;
        if(visited[ny][nx]) continue;
        ret += DFS(ny,nx);
    }

    return ret;
}


int main(){ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> h >> w >> k;
    for(int i = 0; i < h; i++){
        for(int j=0; j < w; j++){
            a[i][j] = 1;
        }
    }
    while(k--){
        cin >> sx >> sy >> ex >> ey;
        a[sy][sx] = 0;
        for(int i = sy; i < ey; i++){
            for(int j = sx; j < ex; j++){
                a[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j=0; j < w; j++){
            if(!visited[i][j] && a[i][j] == 1){
                stk.push_back(DFS(i,j));
            }
        }
    }
    sort(stk.begin(), stk.end());
    cout << stk.size() << "\n";
    for(int i : stk){
        cout << i << " ";
    }
   
    return 0;
}