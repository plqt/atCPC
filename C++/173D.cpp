#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    
    int min=0;
    int max=0;
    int a=0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        min=A[0];
        if(min>A[i]) min=A[i];
        //max=A[0];
        //if(max<A[i]) max=A[i];
        a+=A[i];
    }
    cout << a-min << endl;
}
