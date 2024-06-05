#include <bits/stdc++.h>
using namespace std;

int a,b,c,start, ed, res;
int counting[104];


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    for(int i=0; i<3;i++){
        cin >> start >> ed;
        for(int i=start; i<ed; i++) counting[i]++;
    }
    for(int i=0; i<=100; i++){
        if(counting[i]) res += a;
        else if(counting[i] == 2) res += b * 2;
        else if(counting[i] == 3) res += c*3;
    }
    cout << res << "\n"; 
    return 0;

}