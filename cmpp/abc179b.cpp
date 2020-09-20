#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    int N;
    cin >> N;
    int a[105] = {};
    int b[105] = {};
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }
    int count = 0;
    for (int i = 0; i < 105; i++){
        if(i == N) break;
        if(a[i] == b[i]){
            count++;
            if(count == 3){
                cout << "Yes" << endl;
                return 0;
            }
        }else count = 0;
    }
    cout << "No" << endl;
}
