#include <bits/stdc++.h>
using namespace std;

int n,m, sx,sy,ex,ey,cnt;
bool ok = false;
char a[304][304];

const int dy[] = {-1,0,1,0};
const int dx[] = {0, 1, 0, -1};

void bfs(int y, int x){
	bool visited[y][x];
	memset(visited, 0,sizeof(visited));
	queue<pair<int, int>> q;
	visited[y][x] = 1;
	q.push({y,x});

	while(q.size()){
		tie(y,x) = q.front();q.pop();
		for(int i =0; i < 4; i++){
			int ny = y + dy[i]; 
			int nx = x + dx[i];
			if(a[ny][nx] == '#'){
				ok = true;
				return;
			}
			if(ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] == 1) continue;
			visited[ny][nx] = 1;
			if(a[ny][nx] == '0') {
				q.push({ny,nx});
			}
			else if(a[ny][nx] == '1') a[ny][nx] = '0';
		}

	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n >> m >> sx >> sy >> ex >> ey;
	for(int i = 0; i <n; i++){
		for(int j =0; j < m; j++){
			cin >> a[i][j];
		}
	}

	while(true){
		cnt++;
		bfs(sy,sx);
		if(ok) break;
	}

	cout << cnt << "\n";
	return 0;
}