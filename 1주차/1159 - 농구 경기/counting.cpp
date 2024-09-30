#include <bits/stdc++.h>
using namespace std;

int n,m, a[54][54], visited[54][54],ret;
vector<pair<int, int>> home,chicken;

int combi(int start, vector<int> b){
    if(m == b.size()){
        for(pair<int,int> there : b){
            return abs(here.first - there.first) + abs(here.second - there.second);
        }

    }
    for(pair<int,int> there : chicken){
        b.push_back({there.first, there.second});
        combi(here, b);
        b.pop_back();
    }
}

int go(int y, int x){
    visited[y][x] = 1;
    vector<pair<int,int>> b;
    for(pair<int, int> there : home){
        ret = min(ret, combi(there, b));
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j =0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) home.push_back({i,j});
            if(a[i][j] == 2) chicken.push_back({i,j});        
        }
    }
    vector<int>b;
    combi(-1, b);
    
    return 0;

}