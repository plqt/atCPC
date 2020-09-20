#include <bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define ll long long
#define coYes cout << "Yes" << endl
#define coYES cout << "YES" << endl
#define coyes cout << "yes" << endl
#define coNo cout << "No" << endl
#define coNO cout << "NO" << endl
#define cono cout << "no" << endl
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
int gcd(int a, int b){ //最大公約数
    if(a%b == 0){
        return b;
    }else{
    return gcd(b, a%b);
    }
}

int main(){
    ll sum=0;
    int n;
    string s;
    cin >> n >> s;
    rep0(i,n){
        if(s[i]=='A') sum+=4;
        else if(s[i]=='B') sum+=3;
        else if(s[i]=='C') sum+=2;
        else if(s[i]=='D') sum+=1;
        }
    if(sum==0){ 
        cout << sum << endl;
        return 0;
    }
    cout << fixed << setprecision(14) << (double)sum/n << endl;
    return 0;
}