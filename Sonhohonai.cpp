#include <bits/stdc++.h>

using namespace std;
int main(){
		int TC ; cin >> TC ;
	
	while (TC--){
		int n ; cin >> n ; 
		int a[n];
		for (int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		vector <int> vt(a,a+n);// copy noi dung mang a cho vector vt
		sort(vt.begin(), vt.end());
		
		for (int i = 0 ; i < n ; i++){
			auto it = upper_bound (vt.begin(), vt.end(),a[i]);
			if (it == vt.end()){
			cout <<"_ ";
			} 
			else{
					cout << *(it) <<" ";
			}
		}
		cout << endl;
		
	}



	return 0;
}

