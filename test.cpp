#include <bits/stdc++.h>
using namespace std;

string str;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getline(cin, str);
    //97~122
    for(int i=0; i<str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z' ) str[i] = (str[i] - 'a' + 13) % 26 + 'a';
        if('A'<=str[i] && str[i]<='Z') str[i] = (str[i]-'A'+13)%26+'A';
        cout << str[i];
        
    }
    return 0;
}
/// g++ -std=c++14 -Wall test.cpp -o test.out