/*#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i <= (int)(n); i++)

int main()
{
    long long X, K, D;
    int Y = 0;
    cin >> X >> K >> D;
    if (X == 0)
    {
        if (K % 2 == 0)
        {
            cout << '0' << endl;
        }
        else
        {
            cout << D << endl;
        }
    }
    else if (X < 0)
    {
        rep(i, K)
        {
            X += D;
            if (X >= 0)
            {
                Y = K - i;
                break;
            }
        }
        if (Y % 2 == 0)
        {
            if (X >= 0)
            {
                cout << X << endl;
            }
            else
            {
                cout << -X << endl;
            }
        }
        else
        {
            cout << X - D << endl;
        }
    }
    else if (X > 0)
    {
        rep(i, K)
        {
            X -= D;
            if (X <= 0)
            {
                Y = K - i;
                break;
            }
        }
        if (Y % 2 == 0)
        {
            if (X < 0)
            {
                cout << -X << endl;
            }
            else
            {
                cout << X << endl;
            }
        }
        else
        {
            cout << X + D << endl;
        }
    }
}*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, x, n) for(int i = x; i < (n); ++i)
 
int main()
{
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    if (x/d >= k) {
        x -= k*d;
    } else {
        k -= x/d;
        x -= (x/d)*d;
        if (k%2==1) x = abs(x-d);
    }
    cout << x << endl;
    return 0;
}