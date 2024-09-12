#include<bits/stdc++.h>
using namespace std;  
#define V 9

vector<int> arr[V];


int main(){
    arr[1].push_back(2);
    arr[1].push_back(3);
    arr[3].push_back(4);

    for(int i = 0; i < V; i++){
		cout << i << " :: ";
		for(int there : arr[i]){
			cout << there << " ";
		}
		cout << "\n";
	}

    return 0;
}