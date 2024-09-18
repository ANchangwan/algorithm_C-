#include<bits/stdc++.h>
using namespace std; 
// a 비오기 전, 비오고 b
int a[101][101],n,x,y,nx,ny,ret=1,r_h;
bool visited[101][101];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};


void DFS(int y, int x, int d){
    visited[y][x] = 1;
    for(int i=0; i <4; i++){
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >=n || ny >=n ) continue;
        if(!visited[ny][nx] && a[ny][nx] > d) {
            DFS(ny,nx,d);
        }
    }
    return;
}

int main(){ 
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   cin >> n;

   for(int i=0; i <n; i++){
    for(int j=0; j <n; j++){
       cin >> a[i][j];
    }
   }
  for(int k=1; k < 101;k++ ){
    fill(&visited[0][0], &visited[0][0] + 101*101, 0);
    int cnt = 0;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(a[i][j] > k && !visited[i][j]){
                DFS(i,j,k);
               cnt++;
            }
        }
    }
    ret = max(ret, cnt);
  }
    cout << ret << "\n";

    return 0;
}