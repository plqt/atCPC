#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    int N;
    cin >> N;
    int a[10000] = {};
    for (int i = 1; i < 100; i++)
    {
        for (int j = 1; j < 100; j++)
        {
            for (int k = 1; k < 100; k++)
            {
                if (i*i + j*j + k*k + i*j + j*k + k*i <= 10000)
                {
                    a[i*i + j*j + k*k + i*j + j*k + k*i - 1]++;
                }
            }
            
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
}
