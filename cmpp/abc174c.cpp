#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
#define N 10000000

int main(){
    ll K;
    cin >> K;
    if (7 % K == 0){
            cout << '1' << endl;
            return 0;
        }
    ll a = 7;
    for (int i =0; i < N; i++)
    {
        a = a * 10 + 7;
        if (a % K == 0)
        {
            cout << i + 2 << endl;
            return 0;
        }
        
    }
    cout << "-1" << endl;
}
