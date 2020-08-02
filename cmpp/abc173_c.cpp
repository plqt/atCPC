#include <bits/stdc++.h>

using namespace std;

int main(){
    int H, W, K,
        ctr = 0,
        ans = 0;
    cin >> H >> W >> K;
    string c[H][W];
    for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			cin >> c[i][j];
		}
	} //ここが間違い
    for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(c[i][j] == "#") ctr++;
		}
        if(ctr == K - 2){
            ans++;
            break;
        }
	}
    cout << ans << endl;
}
