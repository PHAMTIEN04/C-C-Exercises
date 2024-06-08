#include <bits/stdc++.h>

using namespace std;
int timkiemtt(int a[],int n,int x){
	if(n == 0) return 0;
	else{
		if(a[n-1] == x) return a[n-1];
		else{
			return timkiemtt(a,n-1,x);
		}
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a[5] = {1,2,3,4,5};
	cout << timkiemtt(a,5,4);


	return 0;
}

