#include <bits/stdc++.h>
using namespace std;

int t=0;
char S[200001],T[200001];
int main(){

    cin >> S >> T;
    int length=sizeof S / sizeof S[0];
    for(int i=0 ; i<length ; i++){
        if(S[i]!=T[i]) { t+=1; }
    }
    cout << t << endl;
}