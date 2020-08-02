#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define N 200005
using ll = long long;
using namespace std;

int main(){
    ll x[N] = {}, y[N] = {};
    ll n;
    double d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int counter(0);
    for (int i = 0; i < n; i++)
    {
        if ((double)sqrt(x[i] * x[i] + y[i] * y[i]) <= d)
        {
            counter++;
        }
    }
    cout << counter << endl;
}
