#include<bits/stdc++.h>
using namespace std;   
string s; 

//# 1
int main(){
    getline(cin, s); 
    for(int i = 0; i < s.size(); i++){
        // 대문자인경우
        if(s[i] >= 65 && s[i] < 97){
            if(s[i] + 13 > 90) s[i] = s[i] + 13 - 26; 
            else s[i] = s[i] + 13;  
        }else if(s[i] >= 97 && s[i] <= 122){
            if(s[i] + 13 > 122)s[i] = s[i] + 13 - 26; 
            else s[i] = s[i] + 13;  
        }
        cout << s[i];  
    } 
    return 0; 
}

#include <bits/stdc++.h>
using namespace std;

string str;

// #2
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