#include <bits/stdc++.h>
using namespace std;    

int n = 5, r = 3; // r을 바꿔가면서 연습해보세요. :)  
int a[] = {1,2,3,4,5};

void printV(vector<int> v){
    for(int i : v) cout << i << " ";
    cout << "\n";
    return; 
}

void combi(int start, vector<int> v){
    if(r == v.size()){
        printV(v);
        return;
    }
    for(int i=start+1; i<n; i++){
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}


int main(){
    vector<int> v;
    combi(-1, v);
    return 0;
}
// 조합을 구할 때는 r=4 부터는 재귀로 구하는게 좋다.
