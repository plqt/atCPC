#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int N;
    cin >> N;
    int L[N];
    cin >> L[N];
    if(N<3) cout << '0' << endl;
    if(N==3&&(L[0]==L[1]||L[0]==L[2]||L[1]==L[2])) cout << '0' << endl;
}