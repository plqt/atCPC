#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int H,W,K;
    cin >> H >> W >> K ;
    char C[H][W];
    rep(i,H){
        rep(j,W){
            cin >> C[i][j] ;
        }
    }
    int ans=0,c;
    int blackH,blackW;
    rep(blackH,1<<H){ //1をH左シフト??
        rep(blackW,1<<W){ //1をW左シフト??
            c=0;
            rep(i,H){
                rep(j,W){
                    if(((1<<i)&blackH) and ((1<<j)&blackW) and C[i][j]=='#')
                    //1をi左シフトしたものとblackHの論理和
                    c++;
                }
            }
            if(c==K) ans++;
        }
    }
    
    cout << ans << endl;
}
//解説読んでもよくわからん