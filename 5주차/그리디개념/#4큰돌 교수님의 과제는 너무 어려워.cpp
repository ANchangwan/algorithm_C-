#include<bits/stdc++.h>
using namespace std;


int n;
double s;
priority_queue<double> pq;
vector<double>v;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &s);
        if(pq.size() == 5){
            pq.push(s);
            pq.pop();
        }else pq.push(s);
    }
    while(pq.size()){
        v.push_back(pq.top());pq.pop();
    }
    reverse(v.begin(), v.end());
    for(double i : v) printf("%.2lf\n", i);

    return 0;
}

// 공간 복잡도가 너무 크기 때문에 우선순위 맥스 큐로 배열 크기 5개로 유지