#include <bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define ll long long
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
    return gcd(b, a%b);
    }
}

int main(){
    ll sum=0;
    vector<int> d(7),j(7);
    rep0(i,7){
        cin >> d[i];
    }
    rep0(i,7){
        cin >> j[i];
    }
    rep0(i,7){
        sum+=max(d[i],j[i]);
    }
    cout << sum << endl;
    return 0;
}