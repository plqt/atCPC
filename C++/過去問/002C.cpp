#include <bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define ll long long
#define coYes cout << "Yes" << endl
#define coYES cout << "YES" << endl
#define coyes cout << "yes" << endl
#define coNo cout << "No" << endl
#define coNO cout << "NO" << endl
#define cono cout << "no" << endl
#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
int gcd(int a, int b){ //最大公約数
    if(a%b == 0){
        return b;
    }else{
    return gcd(b, a%b);
    }
}

int main(){
    double ax,ay,bx,by,cx,cy;
    double ans;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    ans=(double)abs((bx-ax)*(cy-ay)-(by-ay)*(cx-ax))/2.0;
    cout << setprecision(14) << ans << endl;
    return 0;
}