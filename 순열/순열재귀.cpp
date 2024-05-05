#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n, r;

void printV(){
    for(int i=0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return;
}

void permutation(int n, int r, int depth){
    if(r == depth){
        printV();
        return;
    }

    for(int i=depth; i <n; i++){
        swap(v[i], v[depth]);
        permutation(n,r,depth+1);
        swap(v[i], v[depth]);
    }
    return;
}


int main(){
    cout << "n개 중의 r개를 뽑는 경우의 수 :" << " ";
    cin >> n >> r;
    for(int i=0; i<n; i++) v.push_back(i+1);;
    sort(v.begin(),v.end());
    permutation(n, r, 0);
    return 0;
}

