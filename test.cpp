#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n,ret = INF, s[24][24];

int go(vector<int> &a, vector<int> &b){
    pair<int, int> ret;
    for(int i =0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            if(i == j) continue;
            ret.first += s[a[i]][a[j]];
            ret.second += s[b[i]][b[j]];
        }
    }
    return abs(ret.first - ret.second);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            cin >> s[i][j];
        }
    }

    for(int i =0; i < (1 << n);i++){
        if(__builtin_popcount(i) != n/2) continue;
        vector<int>start,link;
        for(int j =0; j < n; j++){
            if(i & (1 << j)) start.push_back(j);
            else link.push_back(j);
        }
        ret = min(ret, go(start,link));
    }
    cout << ret << "\n";
    return 0;
    
}