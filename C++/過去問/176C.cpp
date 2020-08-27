#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    int N;
    cin >> N;
    int A[N];
    rep(i,N){
        cin >> A[i];
    }
    long long sum=0,c;
    rep(i,N-1){
        if(A[i]>A[i+1]){
            c=A[i]-A[i+1];
            sum+=c;
            A[i+1]+=c;
        }
    }
    cout << sum << endl;
}