#include<bits/stdc++.h>
using namespace std;  
#define V 3

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

bool a[V][V];
int visited[V][V];

void go(int x, int y){
    visited[x][y] = 1;
    for(int i = 0; i <4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= V || ny < 0 || ny >=V) continue;
        if(visited[ny][nx]) continue;
        if(!a[ny][nx]) continue;
        go(nx,ny);
    }
    return;
}

int main(){
    a[0][0] = 1;
    a[1][0]=1; a[2][1]=1;  a[2][2] = 1;
    for(int i = 0; i < V; i++){
        for(int j= 0; j<V; j++ ){
            if(a[i][j] && visited[V][V] == 0){
                
            }
        }
    }
    return 0;
}