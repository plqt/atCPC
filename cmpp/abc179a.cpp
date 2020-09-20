#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
int main(){
    string a;
    cin >> a;
    if(a[a.length()-1] == 's'){
        cout << a + "es" << endl;
    }else{
        cout << a + 's' << endl;
    }
}
