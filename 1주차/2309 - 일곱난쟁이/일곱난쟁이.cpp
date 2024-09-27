#include<bits/stdc++.h>
using namespace std;
int ret[10],sum;
vector<int>res;

int main(){
    for(int i=0; i <9; i++){
        cin >> ret[i];
    }
    sort(ret, ret+9);
    do{
        sum = 0;
        for(int i=0; i<7;i++) {
            sum += ret[i];
           
        };
        
        if(sum == 100)break;
    }while(next_permutation(ret,ret+9));
    sort(ret, ret+7);
    for(int i =0;i <7;i++) cout << ret[i] << "\n";
    return 0;
}