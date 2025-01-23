#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n, s[24][24], ret = INF,visited[24];

int go(vector<int> &a, vector<int> &b){
    pair<int, int> ret;
    for(int i=0; i < n/2; i++){
        for(int j =0; j < n/2; j++){
            if(i == j)continue;
            ret.first += s[a[i]][a[j]];
            ret.second += s[b[i]][b[j]];
        }
    }
    return abs(ret.first - ret.second);
}

void combi(int start, vector<int> &b){
    if(b.size() == n){
        vector<int> start,link;
        for(int i = 0; i < n; i++){
            if(visited[i]) start.push_back(i);
            else link.push_back(i);
        }
        ret = min(ret, go(start, link));
        return;
    }
    for(int i =start+1; i < n; i++){
        visited[i] = 1;
        b.push_back(i);
        combi(i, b);
        b.pop_back();
        visited[i] = 0;
    };
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> s[i][j];
        }
    }
    
    cout << ret << "\n";
    return 0;
}
