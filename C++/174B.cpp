#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int N,D;
    cin >> N >> D;
    long int x,y;
    int c=0;
    long int d=0;
    rep(i,N){
        cin >> x >> y;
        d=round(sqrt(x*x+y*y));
        if(d<=D) c++;
    }
    cout << c;
}
