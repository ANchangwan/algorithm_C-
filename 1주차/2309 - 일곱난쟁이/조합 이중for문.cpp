#include<bits/stdc++.h>
using namespace std;
int a[9],sum;
int n=9,r =7;
pair<int,int> ret;
vector<int> result;

void Ios_Base(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    return;
}

void solve(){
    for(int i =0; i < 9; i++){
        for(int j = 0; j < i; j++){
            if(sum - a[i] - a[j] == 100){
                ret={i,j};
                return;
            }
        }
    }
}

int main(){
    Ios_Base();
    for(int i =0; i <n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    solve();
    for(int i =0; i < 9;i++){
        if(ret.first == i || ret.second == i) continue;
        result.push_back(a[i]);
    }
    sort(result.begin(), result.end());
    cout << '\n';
    for(int i : result) cout << i << '\n';
    
   
    return 0;
}