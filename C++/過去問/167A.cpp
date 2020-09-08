#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long

int main(){
    int c=0;
    string s,t;
    cin >> s >> t;
    string ans="No";
    rep(i,s.length()){
        if(s[i]!=t[i]){
            break;
            }else if(s[i]==t[i]){
                c++;
                if(s.length()+1==t.length() and c==s.length()){
                cout << "Yes" << endl;
                return 0;
                }   
            }
        }
        
    cout << ans << endl;
    return 0; 
}