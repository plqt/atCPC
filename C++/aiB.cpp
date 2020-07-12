#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    int a[N];
    int c=0;
    for(int i=1;i<=N;i++){
    cin >> a[i];
    }
    for(int i=1;i<=N;i++){
    if(i%2!=0){
        if(a[i]%2!=0){
            c++;
        }
    }
    }
    cout << c << endl;
}