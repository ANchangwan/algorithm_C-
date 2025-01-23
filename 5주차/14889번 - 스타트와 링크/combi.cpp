#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int s[24][24], ret = INF, n; 
int k = 10, visited[24];
vector<int> v; 
int go(vector<int>& a, vector<int> & b){
	pair<int, int> ret;  
	for(int i = 0; i < n / 2; i++){
		for(int j = 0; j < n / 2; j++){
			if(i == j)continue;
			ret.first += s[a[i]][a[j]];
			ret.second += s[b[i]][b[j]]; 
		}
	}
	return abs(ret.first - ret.second);
} 
void combi(int start, vector<int> b){ 
    if(b.size() == k){ 
        vector<int> start, link; 
        for(int i = 0; i < n; i++){
        	if(visited[i])start.push_back(i);
        	else link.push_back(i);
		} 
		ret = min(ret, go(start, link)); 
        return;
    }
    for(int i = start + 1; i < n; i++){ 
        visited[i] = 1;
        b.push_back(i);
        combi(i, b);
        visited[i] = 0; 
        b.pop_back();
    }
    return;
}  

int main() { 
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    } 
    k = n / 2;
	vector<int> v;  
    combi(-1, v);  
    cout << ret << '\n';
    return 0;
} 