#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S[N];
    int a=0,w=0,t=0,r=0;
    for(int i=0;i<N;i++){
        cin >> S[i];
        
        if(S[i]=="AC")a++;
        else if(S[i]=="WA")w++;
        else if(S[i]=="TLE")t++;
        else if(S[i]=="RE")r++;
    } 
    cout << "AC x " << a << endl ;
    cout << "WA x " << w << endl ;
    cout << "TLE x " << t << endl ;
    cout << "RE x " << r  << endl ;
}
