#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<=(int)(n);i++)
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
    string s,ans="YES";
    cin >> s;
    rep(i,s.length()/2){
        if(s[i]!=s[s.length()-i-1] and s[i]!='*' and s[s.length()-i-1]!='*')
            ans="NO";
    }
    cout << ans << endl;
    return 0;
}