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
    int n,c;
    cin >> n;
    vector<int> a(n);
    rep0(i,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    if(a[0]==a[1]){
        rep0(i,n-1){
            if(a[i]!=a[i+1]){ 
                c=i+1;
                break;
            }
        }
        cout << a[c] << endl;
        return 0;
    }
    cout << a[1] << endl;
    return 0;
}