// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     random_device rd;
//     mt19937 g(rd());
//     int n;
  
//     // vector<int> height = {20,7,23,19,10,15,25,8,13};
//     vector<int> height;
    
//     for(int i=0; i<9; i++){
//        cin >> n;
//       height.push_back(n);
//     }

//     vector<int> arr;
//     bool found = false;
    
//     while(!found){
//         shuffle(height.begin(), height.end(),g);
//         vector<int>temp;
//         int sum = 0;

//         for(int num:height){
//             if(temp.size() == 7){
//                 break;
//             }
//             if(sum + num <= 100){
//                 temp.push_back(num);
//                 sum+=num;
//             }
//         }
//         if(sum == 100){
//             arr = temp;
//             found = true;
//         }

//     }
//     sort(arr.begin(), arr.end());

//     for(int res : arr){
//         cout << res << endl;
//     }
//    return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int a[9];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i=0; i< 9; i++){
        cin >> a[i];
    }
    sort(a, a+9);
    do{
        for(int i : a) cout << i << " ";
        cout << "\n";
        int sum = 0;
        for(int i=0; i<7; i++) sum+=a[i];

        if(sum == 100)break;
    }while(next_permutation(a,a+9));
     
    for(int i=0; i<7;i++) cout << a[i] << "\n";
    
    return 0;
}