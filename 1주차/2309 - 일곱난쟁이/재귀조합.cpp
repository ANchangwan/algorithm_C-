#include<bits/stdc++.h>
using namespace std;
int a[9];
int n=9,r =7;
vector<int> ret;

void Ios_Base(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    return;
}

void combi(int start, vector<int> &b){
    if(b.size() == r){
        int sum = 0;
        for(int i : b){
            sum += a[i];
        }
    
        if(sum == 100){
            for(int i : b) {
                cout << a[i] << "\n";
            }
            exit(0);
        }
        return;
    }
    for(int i =start+1; i < n;i++){
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
}

int main(){
    Ios_Base();
    for(int i =0; i <n;i++) cin >> a[i];
    sort(a, a+9);
    vector<int> b;
    combi(-1, b);
   
    return 0;
}