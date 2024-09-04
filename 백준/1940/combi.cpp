#include <bits/stdc++.h>
using namespace std;

int n,m,cnt;
int a[15004];

void combi(int start, vector<int>& v){
    if(v.size() == 2){ // 2개 뽑아서 사용하는 경우의 수
        int b = a[v[0]]; // v[0] 1 인덱스
        int c = a[v[1]]; // v[1] 2 인덱스
        if(b + c == m) cnt++;
        return;
    }

    for(int i=start + 1; i<v.size(); i++){
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    vector<int>v;
    for(int i=0; i<n; i++) cin >> a[i];
    
    combi(-1, v);

    return 0;
} 


   
