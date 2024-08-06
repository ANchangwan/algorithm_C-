#include<bits/stdc++.h> 
using namespace std;   
int N,K;
int maxSum=0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> K;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    do{ 
        int sum = 0;
        for(int i=0; i<K; i++) {
            sum += arr[i];
        }
        maxSum = max(maxSum, sum);
        cout << maxSum << endl;
    }while(next_permutation(arr.begin(), arr.end()));
    cout << maxSum << endl;
    return 0;
} 
/// g++ -std=c++14 -Wall test.cpp -o test.out