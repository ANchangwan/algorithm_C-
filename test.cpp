#include <bits/stdc++.h>
using namespace std;

bool check_first(string str){
    for(char s : str){
        if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
            return true;
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(true){
        string str,temp;
        bool flag;
        int rstr,lstr;
        cin >> str;
        if(str == "end") break;
        flag = check_first(str);
        if(flag){
            for(char s : str){
                if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
                    rstr++;
                    lstr = 0;
                }else{
                    lstr++;
                    rstr = 0;
                }
                if(rstr == 3 || lstr == 3){
                    flag = false;
                    break;
                }
            }
        }
      
         if (flag) {
            for (int i = 0; i < str.size(); i++) { // 변경된 부분
                if (str[i] == str[i+1]) {
                    flag = false;
                    if ((str[i] == 'e' && str[i+1] == 'e') || (str[i] == 'o' && str[i+1] == 'o')) {
                        flag = true;
                    } else {
                        break;
                    }
                }
            }
        }

        if(flag){
            cout << "<" << str << ">" << " is acceptable." << "\n";
        }else{
            cout << "<" << str << ">" <<" is not acceptable." << "\n";
        }
    }



    return 0;
}