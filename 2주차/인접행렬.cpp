#include<bits/stdc++.h>
using namespace std;  

#define max_size 9

int a[max_size][max_size], visited[max_size];

// int go(int from){
// 	visited[from] = 1;
// 	cout << from << "\n";
// 	for(int i=0; i < max_size; i++){
// 		if(visited[max_size]) continue;
// 		if(a[from][i]){
// 			go(i);
// 		}
// 	}
// }

int main(){ 
	a[1][2] = 1, a[1][3] = 1, a[3][4] = 1;
	a[2][1] = 1, a[3][1] = 1, a[4][3] = 1;
	for(int i=0; i <max_size; i++){
		for(int j = 0; j <max_size; j++){
			if(a[i][j] && visited[i] == 0){
				
			}
		}
	}
	
} 

int go(int from){
	visited[from] = 1;
	cout << from << "\n";
	for(int i = 0; i < max_size; i++){
		if(visited[i]) continue;
		if(a[from][i]) {
			go(i);
		};
		
	}