#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ;
	cin >> TC;
    for(int i = 0;i < TC;i++){
        vector<int> v1;
        for(int j= 0;j < 7;j++){
            int m;
            cin >> m;
            v1.push_back(m);
        }
        sort(v1.begin(),v1.end()); //4 9 13 13 17 22 26
        int a = v1[0];
        int b = v1[1];
        int c = v1[v1.size() - 1] - a - b;
        cout << a  << " " << b << " " << c << endl;
    }
	return 0;
}

