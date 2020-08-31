#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int N,K;
    int sum=0;
    cin >> N >> K ;
    vector<int> p(N);
    rep(i,N){
        cin >> p[i];
    }
    sort(p.begin(),p.end());
    rep(i,K){
        sum+=p[i];
    } 
    cout << sum << endl;
}