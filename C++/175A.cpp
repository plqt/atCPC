#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    char S[3];
    cin >> S;
    int c=0;
    rep(i,3){
        if(S[0]=='R'&&S[1]=='R'&&S[2]=='R'){
            c=3;
        }else if(S[0]=='R'&&S[1]=='R'){
            c=2;
        }else if(S[1]=='R'&&S[2]=='R'){
            c=2;
        }else if(S[0]=='R'||S[1]=='R'||S[2]=='R'){
            c=1;
        }else{c=0;}
    }
    cout << c <<endl;
}