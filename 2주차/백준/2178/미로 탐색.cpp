#include<bits/stdc++.h>
using namespace std;  
#define V 104

int n,m,visited[V][V],a[V][V],x,y;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0,1,0,-1};

int main(){
    cout.tie(NULL);
    cin.tie(NULL);
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%1d",&a[i][j]);
        }
    }

    queue<pair<int,int>> q;
    visited[0][0] = 1;
    q.push({0,0});
    while(q.size()){
        tie(y,x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(nx < 0 || ny < 0 || ny >=n || nx >= m || !a[ny][nx]) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }

    printf("%d", visited[n-1][m-1]);
    return 0;

}