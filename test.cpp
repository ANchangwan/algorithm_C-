#include <bits/stdc++.h>
using namespace std;

struct A{
    int a;
    int b;
    int c;
};


queue<A> q;
int n,ret,a[3];
bool flag = false;
int visited[5][5][5];
int attack[6][3] = {
    {9, 3, 1},
    {9, 1, 3},
    {3, 1, 9},
    {3, 9, 1},
    {1, 9, 3},
    {1, 3, 9}
};


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    q.push({a[0], a[1], a[2]});
    visited[a[0]][a[1]][a[2]] = 1;
    while(q.size()){
        int a = q.front().a;
        int b = q.front().b;
        int c = q.front().c;
        q.pop();
        
        for(int i=0; i < 6; i++){
            int na = max(0, a - attack[i][0]);
            int nb = max(0, b - attack[i][1]);
            int nc = max(0, c - attack[i][2]);
            if(visited[na][nb][nc]) continue;
            visited[na][nb][nc] = visited[a][b][c] + 1;
            q.push({na,nb,nc});
        }
       
    }
    cout << visited[0][0][0] - 1 << "\n";
    return 0;
}