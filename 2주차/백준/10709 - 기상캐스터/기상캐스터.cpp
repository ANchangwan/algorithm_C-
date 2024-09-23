#include <bits/stdc++.h>
using namespace std;   
#define V 104

int h,w,c_p[V][V],m=0,k;
int a[V][V];
string line;
int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> h >> w;
    for(int i = 0; i<h;i++){
        cin >> line;
        for(int j =0 ; j < w; j++){
            if(line[j] == '.') {
                a[i][j] = -1;
            }
            if(line[j] == 'c'){
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(a[i][j] == 0){
                int cnt = 1;
                while(a[i][j+1] == -1){
                    a[i][j+1] = cnt++;
                    j++;
                }   
            }
        }
    }
    
    for(int i =0; i<h; i++){
        for(int j=0; j <w; j++){
            cout << a[i][j] << " ";
        }
       cout << "\n";
    }
	return 0;
}