#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<=(int)(n);i++)
#define ll long long

int main(){
    int x,y,c=0;
    cin >> x >> y;
    rep(i,x){
        rep(j,x-i){
            if(i+j==x and 2*i+4*j==y){
                c=1; break;
            }
        }
    }
    if(c==1) cout << "Yes" << endl;
    else cout <<"No" << endl;
}