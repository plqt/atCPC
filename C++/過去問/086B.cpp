#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<(int)(n);i++)
#define ll long long
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
    return gcd(b, a%b);
    }
}

int main(){
    string a,b;
    cin >> a >> b;
    int sum=0;
    istringstream ss= istringstream(a+b);
    ss >> sum;
    rep(i,sum/2){
        if(i*i==sum){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;    
}