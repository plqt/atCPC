#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
const ll mod=1000000007;
int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
    return gcd(b, a%b);
    }
}

ll powmod(ll x,ll y){
    ll res=1;
    rep(i,y){
        res=res*x%mod;
    }
    return res;
}
int main(){
    ll n;
    cin >> n;
    ll ans=powmod(10,n)-powmod(9,n)-powmod(9,n)+powmod(8,n);
    //A=0,A=9となるiがそれぞれ存在しないのは9^N通り、
    //A=0,A-9となるiがともに存在しないのは8^N通り、
    //A=0,A=9となるiが少なくとも一方は存在しないのは9^N+9^N-8^N通り
    //全ての選び方は10^N通り
    ans%=mod;
    ans=(ans+mod)%mod;
    cout << ans << endl;
    /*nP2通りの選び方、かつn-2分の0~9の10通りの選び方を実装したかった
    //結局考え方が間違っていた
    unsigned ll n,sum;
    unsigned ll temp=1,ans;
    cin >> n;
    sum=n*(n-1);
    cout << sum << endl;
    if(n==1){
        cout << 0 << endl;
        return 0;
    }else{
        for(int i=1;i<=n-2;i++){
            temp*=10;
        }
    }
    cout << temp << endl;
    ans=sum*temp%mod;
    cout << sum*temp%mod << endl;
    */
    return 0;
}
