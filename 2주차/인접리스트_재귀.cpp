#include<bits/stdc++.h>
using namespace std;  
#define V 10

vector<int> arr[V];
int visited[V];

int go(int idx){
    cout << idx << "\n";
    visited[idx] = 1;
    for(int there : arr[idx]){
        if(visited[there]) continue;
        go(there);
    }


}


int main(){
    arr[1].push_back(2);
    arr[1].push_back(3);
    arr[3].push_back(4);

    for(int i = 0; i < V; i++){
        if(arr[i].size() && visited[i] == 0) go(i);
    }
   

    return 0;
}