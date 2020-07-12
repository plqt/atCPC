#include <bits/stdc++.h>
using namespace std;

int N,M,K,t=0;
//int A[100000000],B[100000000];
vector<int> A,B;

int main(){
    cin >> N >> M >> K ;
    for(int i=0;i<N;i++){
        cin >> A[i] ;
    }
    for(int i=0;i<M;i++){
        cin >> B[i];
    }
    int MAX;
    if(N>M){
        MAX=N;
    }else{
        MAX=M;
    }
    for(int i=0;i<MAX;i++){
        if(A[i]<B[i]){
            t=t-K-A[i];
         A.erase(A.begin());
         t+=1;
         }else if(A[i]>B[i]){
             t=t-K-B[i];
             B.erase(B.begin());
             t+=1;
         }//ABどちらの所要時間も等しい場合の処理をどうするか
    }
    cout << t << endl;
}