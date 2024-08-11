#include<bits/stdc++.h> 
using namespace std;  

int n,k;
string s;
map<string, int> mp;
map<int, string> mp2;
string arr[100004];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i=0; i < n; i++){
        cin >> s;
        mp[s] = i + 1;
        mp2[i+1] = s;
        arr[i+1] = s;
    }
    cout << mp["hi"] << endl;

    
    return 0;
} 
/// g++ -std=c++14 -Wall test.cpp -o test.out