#include <bits/stdc++.h>
using namespace std;
int n,m, a[104][104],visited[104][104];
vector<pair<int,int>> c;
queue<pair<int,int>> q;
int main(){
    cin >> n >> m;
    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) c.push_back({i,j});  
        }
    }

}