#include<bits/stdc++.h>
using namespace std;
#define V 3  


int visited[V];
vector<int> adj[V];


void DFS(int from){
    visited[from] = 1;
    for(int v : adj[from]){
        if(visited[v]==0) {
            DFS(v);
        }
    }
    return;
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    DFS(1);
    return 0;
}