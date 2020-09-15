#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
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
    vector<vector<int>> a(3,vector<int> (3));
    rep(i,3){
        rep(j,3){
            cin >> a[i][j]; 
        }
    }
    int n;
    cin >> n;
    vector<int> b(n);
    bool c[3][3];
    rep(i,3){
        rep(j,3){
            c[i][j]=false;
        }
    }
    rep(i,n) cin >> b[i];
    rep(i,3){
        rep(j,3){
            rep(k,n){
                if(a[i][j]==b[k]){
                    c[i][j]=true;
                }
            }
        }
    }
    if(
    (c[0][0]==true and c[0][1]==true and c[0][2]==true) or
    (c[1][0]==true and c[1][1]==true and c[1][2]==true) or
    (c[2][0]==true and c[2][1]==true and c[2][2]==true) or
    (c[0][0]==true and c[1][1]==true and c[2][2]==true) or
    (c[0][2]==true and c[1][1]==true and c[2][0]==true) or
    (c[0][0]==true and c[1][0]==true and c[2][0]==true) or
    (c[0][1]==true and c[1][1]==true and c[2][1]==true) or
    (c[0][2]==true and c[1][2]==true and c[2][2]==true) 
    ){
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;
    }
/*
    rep(i,3){
        rep(j,3){
            cout << c[i][j] << " ";
        }cout << endl;
        }*/
}