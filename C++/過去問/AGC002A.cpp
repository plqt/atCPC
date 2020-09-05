#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long

int main(){
    int a,b;
    cin >> a >> b;
    if(a<=0 and b>=0)
        cout << "Zero" << endl;
    else if(a>0 and b>0)
        cout << "Positive" << endl;
    else{
        if(abs(b-a)%2==0)
        cout << "Negative" << endl;
        else
        cout << "Positive" << endl;
    }
    return 0;
}