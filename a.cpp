#include <bits/stdc++.h>
using namespace std;    
vector<int> &v;
int n = 3, r = 3; // r을 바꿔가면서 연습해보세요. :)  

void printV(vector<int> &v){
    for(int i=0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return;
}

int pre(int n,int r, int depth){
    if(r == depth){
        printV(v);
        return;
    }
    for(int i=depth; i<depth; i++){
        swap(v[i], v[depth]);
        pre(n,r,depth+1);
        swap(v[i], v[depth]);
    }
    return;
}

int main(){
    for(int i=0; i<3; i++) v.push_back(i);
    
}

