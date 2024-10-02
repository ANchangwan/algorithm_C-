#include <bits/stdc++.h>
using namespace std;


int n, a[4], visited[100][100][100];
int _a[6][3] = {
	{9, 3, 1}, 
	{9, 1, 3}, 
	{3, 1, 9}, 
	{3, 9, 1}, 
	{1, 3, 9}, 
	{1, 9, 3}
};

struct A{
    int a,b,c;
};
queue<A> q;
int solve(int x, int y, int z){
    visited[x][y][z] = 1;
    q.push({x, y, z});
 
    while(q.size()){
        int nx = q.front().a;
        int ny = q.front().b;
        int nz = q.front().c;
        q.pop();
        if(visited[0][0][0]) break;
        for(int i =0; i < 6; i++){
            int ma = max(0, nx - _a[i][0]);
            int mb = max(0, ny - _a[i][1]);
            int mc = max(0, nz - _a[i][2]);
            if(visited[ma][mb][mc]) continue;
            visited[ma][mb][mc] = visited[nx][ny][nz] + 1;
            q.push({ma,mb,mc});
        }

    }
    return visited[0][0][0] - 1;
}

int main(){
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    cout << solve(a[0], a[1], a[2]) << "\n";

    return 0;
}