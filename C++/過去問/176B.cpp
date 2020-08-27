#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    string N;
    cin >> N;
    long long sum=0;
    rep(i,N.length()){
        sum+=(int)(N[i]-'0');
    }
    if(sum%9==0){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}
}