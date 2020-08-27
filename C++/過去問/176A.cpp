#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int X,T,N;
    cin >> N >> X >> T ;
    int c=1;
    if(N<=X){
        cout << T << endl;
    }else{
        while(1){
            N-=X;
            c++;
            if(N<=X) break;
    }
    cout << c*T << endl;
    }
}