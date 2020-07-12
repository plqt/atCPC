#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> v(N);
    int size;
    clock_t start = clock();
    for (int i=1,size=v.size();i<=size;i++){
        int c=0;
        for(int x=1;x<size;x++){
            for(int y=1;y<i;y++){
                for(int z=1;z<i;z++){
                    if(i==(x*x)+(y*y)+x*y+(z+y+x)*z)
                    //if(i==(pow((x+y),2)+pow((y+z),2)+pow((x+z),2))/2)
                        c++;
                }
            }
        }
        cout << c << endl;
        
    }
    clock_t end = clock();
        const double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000.0;
        printf("time %lf[ms]\n", time);
   
}