#include<bits/stdc++.h>
using namespace std;
int a[10],sum=100;
vector<int>res;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i=0;i <9; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i =0; i<9;i++){
        for(int j=0; j < i; j++){
            if(sum - a[i] - a[j] == 100){
                for(int k=0;k<j;k++){
                    if (k == i || k == j) continue;
                    cout << a[k] << "\n";
                }
            }
        }
    }
    return 0;
}