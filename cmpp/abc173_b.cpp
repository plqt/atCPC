#include <bits/stdc++.h>

int main(){
    int N,
        ac = 0,
        wa = 0,
        tle = 0,
        re = 0;
    std::string s[100000];
    std::cin >> N;
    for (int i = 0; i < N; i++){
        std::cin >> s[i];
        if (s[i] == "AC"){
            ac++;
        }else if(s[i] == "WA"){
            wa++;
        }else if(s[i] == "TLE"){
            tle++;
        }else if(s[i] == "RE"){
            re++;
        }
    }
    std::cout << "AC x " << ac << std::endl;
    std::cout << "WA x " << wa << std::endl;
    std::cout << "TLE x " << tle << std::endl;
    std::cout << "RE x " << re << std::endl;
}
