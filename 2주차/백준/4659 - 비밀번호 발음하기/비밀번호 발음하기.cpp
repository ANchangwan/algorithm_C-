#include<bits/stdc++.h>
using namespace std;

string s;
int rval,lval;


bool isvowel(int s){
    return (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u');
}

int main(){

    while(true){
         //모음 rval. 자음lval
        int prev = -1;
        bool flag = 0;
        bool include_v = 0;
        rval = lval = 0;
        cin >> s;
        if(s == "end")break;
        for(int i=0; i < s.length(); i++){
            int idx = s[i];
            
            if(isvowel(idx)){
                include_v= 1;
                rval++;
                lval = 0;
            }else{
                lval++;
                rval = 0;
            }
            if(rval == 3 || lval == 3){
                flag = 1;
            }
            if(i >=1 && prev == idx && (idx != 'e' && idx != 'o')){
                flag = 1;
            }
            prev = idx;
          
        }
     

        if(include_v == 0) flag = 1;
       	if(flag) cout << "<" << s << ">" << " is not acceptable.\n";
		else cout << "<" << s << ">" << " is acceptable.\n";
    };
    return 0;
}