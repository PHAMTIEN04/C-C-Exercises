#include <bits/stdc++.h>

using namespace std;
struct DSKS{
	string tenks;
	string tend;
	int kc;
	int dg;
}; 
void nhap(DSKS p[],int n){
	string k;
	for (int i = 0 ; i < n ;i++){
		getline(cin, p[i].tenks,'|');
		getline(cin, p[i].tend,'|');
		cin >> p[i].kc;
		cin >> k;
		cin >> p[i].dg;
	}
}
void in (DSKS p[],int n){
	for (int i = 0 ; i < n;i++){
		if(p[i].dg <= 300){
			cout<<p[i].tenks<<","<<p[i].tend<<", "<<p[i].kc<<", "<<p[i].dg<<endl;
		}
	
	}
	cout << "***"<<endl;
	for (int i = 0 ; i < n;i++){
		if(p[i].kc<= 3){
			cout<<p[i].tenks<<","<<p[i].tend<<", "<<p[i].kc<<", "<<p[i].dg<<endl;
		}
	
	}
}
int main(){

	int n;
	cin >> n;
	cin.ignore();
	DSKS p[n];
	nhap(p,n);
	in(p,n);

	return 0;
}

