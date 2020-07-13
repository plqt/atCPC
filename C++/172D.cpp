#include <bits/stdc++.h>
using namespace std;

int N,sum=0;
int main(){
    cin >> N;
    long long ans=0;
    for(int i=1;i<=N;i++){
        long long t=N/i;
        ans+=(t*(t+1)/2)*i;
        //for(int j=1;j<=N;j++){
        //if(i%j==0){
        //    sum+=i;
        //    }
        //}
    }
    cout << ans << endl;
}