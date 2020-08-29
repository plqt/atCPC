#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
/*
int main(){
    string s,t;
    cin >> s >> t ;
    int c,maxx=0;
    for(int i=0;i<=s.size()-t.size();i++){
        c=0;
        rep(j,t.size()){
            if(s[j+1]==t[j]) c++;
        }
        maxx=max(maxx,c);
    }
    cout << t.size()-maxx << endl;
    /*
        if(s[i+a]==t[i]){
            c++;

            if(max<c)max=c;
        }
        a++;
    }
    cout << c << endl;

}*/
int main()
{
	string s,t;
	cin >> s >> t;
	int maxx=0;
	for(int i=0;i<=s.size()-t.size();i++)
	{
		int sum=0;
		for(int j=0;j<t.size();j++)
		{
			if(s[j+i]==t[j])sum++;
		}
		maxx=max(maxx,sum);
	}
	cout << t.size()-maxx << endl ; 
}