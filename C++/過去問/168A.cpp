#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define ll long long

int main(){
    string n;
    cin >> n;
    if(n.length()==3){
        if(n[2]=='2' or n[2]=='4' or n[2]=='5' or n[2]=='7' or n[2]=='9'){
            cout << "hon" << endl;
            return 0;
        }else if(n[2]=='0' or n[2]=='1' or n[2]=='6' or n[2]=='8'){
            cout << "pon" << endl;
            return 0;
        }else if(n[2]=='3'){
            cout << "bon" << endl;
            return 0;
        }
    }else if(n.length()==2){
        if(n[1]=='2' or n[1]=='4' or n[1]=='5' or n[1]=='7' or n[1]=='9'){
            cout << "hon" << endl;
            return 0;
        }else if(n[1]=='0' or n[1]=='1' or n[1]=='6' or n[1]=='8'){
            cout << "pon" << endl;
            return 0;
        }else if(n[1]=='3'){
            cout << "bon" << endl;
            return 0;
        }
    }else if(n.length()==1){
        if(n[0]=='2' or n[0]=='4' or n[0]=='5' or n[0]=='7' or n[0]=='9'){
            cout << "hon" << endl;
            return 0;
        }else if(n[0]=='0' or n[0]=='1' or n[0]=='6' or n[0]=='8'){
            cout << "pon" << endl;
            return 0;
        }else if(n[0]=='3'){
            cout << "bon" << endl;
            return 0;
        }
    }
}