#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, a;
    cin >> N;
    if (N % 1000 == 0) cout << 0 << endl;
    else{
        a = (N / 1000) + 1;
        cout << a * 1000 - N << endl;
    }
}
