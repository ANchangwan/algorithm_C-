#include <bits/stdc++.h>
using namespace std;    

int n = 5, r = 3; // r을 바꿔가면서 연습해보세요. :)  
int a[] = {1,2,3,4,5};

int main(){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            for(int k=0; j<j; k++){
                cout << i << " : " << j << " : " << k << "\n";
            }
        }
       
    }
    return 0;
}