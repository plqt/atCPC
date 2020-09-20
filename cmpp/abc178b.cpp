#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ac, ad, bc, bd, max;
    ac = a * c;
    ad = a * d;
    bc = b * c;
    bd = b * d;
    max = ac;
    if(max < ad){
        max = ad;
    }
    if(max < bc){
        max = bc;
    }
    if(max < bd){
        max = bd;
    }
    cout << max << endl;
}
