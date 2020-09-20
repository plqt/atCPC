#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N == 1){
        cout << 0 << endl;
        return 0;
    }
    if(N == 2){
        cout << 2 << endl;
        return 0;
    }
    ll a;
    a = 20 * (N - 2);
    cout << a % (1000000000 + 7) << endl;
}
