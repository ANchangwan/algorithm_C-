#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int mp,mf,ms,mv,n, ret = INF;
int  tp , tf , ts , tv , tc, sum;
map<int, vector<vector<int>>> ret_v;
struct A{
    int p,f,s,v,c;
}a[16];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for(int i = 0; i < n; i++) cin >> a[i].p >> a[i].f >> a[i].s >> a[i].v >> a[i].c;

    for(int i=0; i < (1 << n); i++){
        vector<int> v;
        tp = tf = ts = tv = tc = sum = 0;
        for(int j=0; j < n; j++){
            if(i & (1 << j)){
                tp += a[j].p;
                tf += a[j].f;
                ts += a[j].s;
                tv += a[j].v;
                sum += a[j].c;
                v.push_back(j+1);
            }
        }
        if(tp >= mp && tf >= mf && ts >= ms && tv >= mv){
           if(ret >= sum){
            ret = sum;
            ret_v[ret].push_back(v);
           }
            
        }
    }
    if(ret == INF) {
        cout << -1 << "\n";
    }else{
            sort(ret_v[ret].begin(), ret_v[ret].end());
        cout << ret << "\n";
        for(auto res : ret_v[ret][0]) cout << res << " ";
    }


    return 0;
}

/*
6
100 70 90 10
30 55 10 8 100
60 10 10 2 70
10 80 50 0 50
40 30 30 8 60
60 10 70 2 120
20 70 50 4 4
*/