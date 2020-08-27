#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int N; cin >> N;
    vector<int> L(N); 
    rep(i,N) cin >> L[i];
    sort(L.begin(),L.end());
    int c=0;
    rep(i,N){
        rep(j,i){
            rep(k,j){
                if(L[i]!=L[j] and L[j]!=L[k] and L[j]+L[k]>L[i])
                c++;
                }
            }
        }
    cout << c << endl;
}