#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    int L, R, d, count = 0;
    cin >> L >> R >> d;
    for (int i = L; i <= R; i++)
    {
        if(i % d == 0) count++;
    }
    cout << count << endl;
}
