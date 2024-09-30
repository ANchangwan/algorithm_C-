#include <bits/stdc++.h>
using namespace std;

int n,m,a[54][54],res= 987654321;
vector<pair<int, int>> home,chicken;
vector<vector<int>> chickenList;

void combi(int start, vector<int> b){
    if(b.size() == m){
        chickenList.push_back(b);
        return;
    }
    for(int i = start+1; i <chicken.size();i++){
        b.push_back(i);
        combi(i,b);
        b.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) home.push_back({i,j});
            if(a[i][j] == 2) chicken.push_back({i,j});
        }
    }
    vector<int>v;
    combi(-1, v);
    for(vector<int> cList:chickenList){
        int ret = 0;
        for(pair<int, int> hList : home){
            int _min = 987654321;
            for(int ch : cList){
                int _dist = abs(hList.first - chicken[ch].first) + abs(hList.second - chicken[ch].second);
                _min = min(_min, _dist);
            }
            ret += _min;
        }
        res = min(res, ret);
    }

    cout << res  << "\n";
    return 0;
}