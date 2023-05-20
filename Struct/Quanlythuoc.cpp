#include <bits/stdc++.h>

using namespace std;
struct QLT{
	string tt;
	string hsd;
	int sl;
	int dg;
};
void nhap(QLT a[],int n){
	for (int i = 0 ; i < n;i++){
			getline(cin,a[i].tt,'\t');
			getline(cin,a[i].hsd,'\t');
			cin>>a[i].sl;
			cin>>a[i].dg;
	}
}
void xuat(QLT a[],int n){
		for (int i = 0 ; i < n;i++){
		cout << a[i].tt << "\t" << a[i].hsd <<"\t"<<a[i].sl << "\t"<<a[i].dg<<endl;
	}
}

int main(){


	int n; cin >> n;
	QLT ql[n];
	nhap(ql,n);
	xuat(ql,n);
	return 0;
}

