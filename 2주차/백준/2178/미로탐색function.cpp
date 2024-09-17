#include<bits/stdc++.h>
using namespace std;  
#define V 104

int v = 104;

int n,m,a[V][V],y,x;
int visited[V][V];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0,1,0,-1};

int BFS(int sy, int sx){
    queue<pair<int, int>> q;
    visited[sy][sx] = 1;
    q.push({sy,sx});
    while(q.size()){
        tie(y,x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx  < 0 || ny < 0 || ny >= n || nx >=m || !a[ny][nx]) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx}); 
        }

    }
  
    
    return visited[n-1][m-1];
}


int main(){
    scanf("%d %d", &n,&m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    printf("%d", BFS(0,0));

    return 0;

}