#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    int N, count = 0;
    int a[100]={};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i = i+2)
    {
        if (a[i] % 2 != 0) count++;
    }
    cout << count << endl;
}
