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
    int n,a,b,k;
    bool flag=true;
    cin >> n >> a >> b >> k;
    vector<int> p(k);
    rep0(i,k)
        cin >> p[i];
    sort(p.begin(),p.end());
    rep0(i,k-1){
        if(p[i]==p[i+1]) flag=false;
    }
    rep0(i,k){
        if(p[i]==a or p[i]==b) flag=false;
    }
    if(flag){
        coYES;
        return 0;
    }else{
        coNO;
        return 0;
    }
}