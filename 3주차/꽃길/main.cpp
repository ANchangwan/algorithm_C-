#include<bits/stdc++.h>
using namespace std;

bool visited[11][11];
int n,a[11][11],s,ret=987654321;

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0,1,0,-1};

bool check(int y, int x){
    if(visited[y][x]) return 0;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n || visited[y][x]){
            return 0;
        }
    }
    return 1;
}

int setFlawer(int y, int x){
    int s = a[y][x];
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= n || visited[y][x]){
            visited[ny][nx] = 1;
            s += a[ny][nx];
        }
    }
    return s;
}
void eraser(int y, int x){
    visited[y][x] = 0;
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        visited[ny][nx] = 0;
    }
}

void flawer(int cnt, int hap){
    if(cnt == 3){
        ret = min(ret, s);
        return;
    }
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(check(i,j)){
                flawer(cnt+1, hap + setFlawer(i,j));
                eraser(i,j);
            }
        }
    }
}


int main(){
    cin >> n;
    for(int i =0; i < n;i++){
        for(int j =0; j< n; j++){
            cin >> a[i][j];
        }
    }

    flawer(0,0);
    cout << ret << "\n";
    return 0;
}