#include<bits/stdc++.h>
using namespace std;

const int INF = -987654321;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0,-1};

char a[28][28];
int r,c,visited[28],ret = INF;

void go(int y, int x, int num, int cnt){
	ret = max(ret, cnt);
	for(int i =0; i < 4; i++){
		int ny = y + dy[i], nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= r || nx >= c)continue;
		int _next = (1 << (int)(a[ny][nx] - 'A'));
		if((num & _next) == 0) go(ny,nx, num | _next,cnt+1);
	}
	return;

}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> r >> c;
	for(int i =0; i < r; i++){
		for(int j =0; j < c; j++){
			cin >> a[i][j];
		}
	}
	go(0, 0, 1 << (int)(a[0][0] - 'A'), 1);
	cout << ret << "\n";

	return 0;
}