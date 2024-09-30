#include <bits/stdc++.h>
using namespace std;

string s;
int n,m,a[54][54],x,y,ex,ey;
int visited[54][54];
vector<pair<int,int>>land;
vector<vector<int>> landList;
queue<pair<int,int>> q;
vector<pair<int,int>>finish;
 
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int ret = -1;

void combi(int start, vector<int> v){
    if(v.size() == 2){
        landList.push_back(v);
        return;
    }
    for(int i = start + 1; i < land.size(); i++){
        v.push_back(i);
        combi(i,v);
        v.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i =0; i <n;i++){
        cin >> s;
        for(int j=0; j<m;j++){
            if(s[j] == 'L'){
                a[i][j] = 1;
                land.push_back({i,j});
            } 
            if(s[j] == 'W') a[i][j] = 0;
        }
    }
    vector<int> v;
    combi(-1,v);

    for(vector<int> lList : landList){
        fill(&visited[0][0], &visited[0][0] + 54*54, 0);
        for(int ll :lList){
            if(q.size() == 1){
                finish.push_back({land[ll].first, land[ll].second});
            }else{
                visited[land[ll].first][land[ll].second] = 1;
                q.push({land[ll].first, land[ll].second});
            }
            
        }
        
        while(q.size()){
            tie(y,x) = q.front();q.pop();
            for(int i = 0; i < 4; i++){
                int ny = y + dy[i];
                int nx = x + dx[i];
                if(nx < 0 || ny < 0 || ny >= n || nx >= m || !a[ny][nx]) continue;
                if(visited[ny][nx]) continue;
                visited[ny][nx] = visited[y][x] + 1;
                if(visited[finish[0].first][finish[0].second]){
                    ret = max(ret, visited[finish[0].first][finish[0].second]);
                    finish.clear();
                    break;
                }
                q.push({ny,nx});         
            } 
        }
    }

    cout << ret+1 << "\n";
    return 0;

}