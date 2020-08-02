#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=(int)(n);i++)

int main(){
    int K;
    cin >> K;
    int c=1;
    long long int t=7;
    if(K%2==0) cout << "-1";
    else rep(i,1000000){
        //cout << t << endl;
        if(t%K==0) break;
        else{ t+=7*(int)round(pow(10,i)); c++; }
    }
    cout << c;
}