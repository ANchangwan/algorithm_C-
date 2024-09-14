#include<bits/stdc++.h>
using namespace std;  
#define V 3

int n,m,nx,ny;
int a[104][104];
int visited[104][104];
int cnt = 0;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};


void DFS(int y,int x){
    visited[y][x]=1;
    for(int i =0; i < 4; i++){
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || nx >= m || ny < 0 || nx >= n) continue;
        if(visited[ny][nx] == 1 && a[ny][nx] == 0) continue;
        DFS(ny,nx);
    }
    return;
}

int main(){

    cin >> n >> m;
    
   for(int i =0; i < n; i++){
        for(int j=0; j < m; j++){
           cin >> a[i][j];
        }
    }
    return 0;
}