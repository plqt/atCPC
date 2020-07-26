#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=(int)(n);i++)

int main(){
    int A,B,C,K;
    cin >> A >> B >> C >> K;
    rep(i,K){
        if(C>B&&B>A){cout <<"Yes"; break; }
        else if(B>C){
            C+=C;
            if(C>B&&B>A) {cout << "Yes"; break;}
        }
        else if(A>B) {
            B+=B;
            if(B>A&&C>B) {cout << "Yes"; break;}
            }
        else cout<<"No";
     }
    
}