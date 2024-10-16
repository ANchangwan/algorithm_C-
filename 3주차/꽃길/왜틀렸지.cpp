#include <bits/stdc++.h>
using namespace std;

bool visited[101][101];
int n,a[101][101], ret=987654321;
const int dy[] = {-1, 0 , 1, 0};
const int dx[] = {0 , 1, 0 , -1};
vector<pair<int, int>> v;

int solve(){
    
    int sum = 0;
    for(int i =1; i < n; i++){
        for(int j =1; j < n; j++){
            if(visited[i][j]){
                sum += a[i][j];
                for(int i = 0; i < 4; i++){
                    int ny = i + dy[i];
                    int nx = j + dx[i];
                    if(ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx]) {
                        return 987654321;
                    };
                    visited[ny][nx] = 1;
                    sum += a[ny][nx];
                }
            }
        }
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(i >=1 && j >=1) v.push_back({i,j});
        }
    }
    for(int i =1; i < n; i++){
        for(int j =1; j < i; j++){
            for(int k =1; k <j; k++){
                visited[v[i].first][v[i].second] = 1;
                visited[v[j].first][v[j].second] = 1;
                visited[v[k].first][v[k].second] = 1;
                ret = min(ret, solve());
                memset(visited, 0,sizeof(visited));
                // visited[v[i].first][v[i].second] = 0;
                // visited[v[j].first][v[j].second] = 0;
                // visited[v[k].first][v[k].second] = 0;  

            }
        }
    }
    cout << ret << "\n";  

  
    return 0;
}