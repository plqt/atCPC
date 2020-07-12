#include <bits/stdc++.h>
using namespace std;

int N,sum=0;
int main(){
    cin >> N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
        int t=0;
        if(i%j==0){
            t+=1;
            sum+=i*t;
            }
        }
    }
    cout << sum << endl;
}