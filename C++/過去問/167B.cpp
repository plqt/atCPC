#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long

int main(){
    ll a,b,c,k;
    ll ans=0;
    cin >> a >> b >> c >> k;
    if(a==k or a+b==k){
        cout << a << endl;
        return 0;
    }else if(a>k or a+b>k){
        cout << k << endl;
        return 0;
    }else if(a+b+c==k){
        cout << a-c << endl;
        return 0;
    }else if(a+b+c>k)
        cout << a-(k-(a+b)) << endl;
        return 0;
    }
