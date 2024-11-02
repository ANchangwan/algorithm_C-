#include <bits/stdc++.h>
using namespace std;

int n,m,r,root;
vector<int> v[54];
bool visited[54];

int dfs(int here){
	int ret = 0;
	// int child = 0;
	if(v[here].empty()) return 1;
	for(int there : v[here]){
		if(there != r){
			ret += dfs(there);
			// child++;
		}
	}

	return ret;
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	for(int i =0; i < n; i++){
		cin >> m;
		if(m == -1) root = i;
		else v[m].push_back(i);
	}
	cin >> r;
	if(r == root){ cout << 0 << "\n";return 0;}

	cout << dfs(root) << "\n";
	return 0;
}